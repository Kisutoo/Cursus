/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmefo <mmefo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 15:36:29 by mmefo             #+#    #+#             */
/*   Updated: 2024/12/19 18:45:48 by mmefo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*get_line(char **stash)
{
	size_t i;
	size_t a;
	char *line;
	char *new_stash;

	i = 0;
	a = 0;
	if (!*stash || !**stash)
		return (free(*stash), *stash = NULL, NULL);
	while ((*stash)[i] && (*stash)[i] != '\n')
		i++;
	line = malloc(i + 2);
	if (!line)
		return (NULL);
	while (a < i)
	{
		line[a] = (*stash)[a];
		a++;
	}
	if ((*stash)[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	if ((*stash)[i])
		new_stash = ft_strdup(*stash + i);
	else
		new_stash = NULL;
	free(*stash);
	*stash = new_stash;
	return (line);
}

char *get_next_line(int fd)
{
	static char *stash = NULL;
	char		 *buffer;
	char		 *line;
	ssize_t 	byreads;

	if ((fd < 0) || (BUFFER_SIZE <= 0))
		return (NULL);
	if (!stash)
		stash = ft_strdup("");
	if (!stash)
		return (NULL);
	while (!ft_strchr(stash, '\n'))
	{
		buffer = malloc(BUFFER_SIZE + 1);
		if (!buffer)
			return (free(stash), stash = NULL, NULL);
		byreads = read(fd, buffer, BUFFER_SIZE);
		if (byreads <= 0)
		{
			free(buffer);
			break;
		}
		buffer[byreads] = '\0';
		stash = ft_strjoin(stash, buffer);
		free(buffer);
		if (!stash)
			return (NULL);
	}
	line = get_line(&stash);
	return (line);
}


// int main(int argc, char **argv)
// {
//     int fd;
//     char *line;

//     if (argc != 2)
//     {
//         printf("Usage: %s <filename>\n", argv[0]);
//         return (1);
//     }
//     fd = open(argv[1], O_RDONLY);
//     if (fd < 0)
//     {
//         perror("Error opening file");
//         return (1);
//     }
//     while ((line = get_next_line(fd)) != NULL)
//     {
//         printf("%s", line);
//         free(line);
//     }
//     if (close(fd) < 0)
//     {
//         perror("Error closing file");
//         return (1);
//     }
//     return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmefo <mmefo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:40:17 by mmefo             #+#    #+#             */
/*   Updated: 2024/12/11 13:15:32 by mmefo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	linelen(char *line, ssize_t byreads)
{
	int		i;

	i = 0;
	while (i < byreads && line[i] != '\n')
	{
		i++;
	}
	return (i);
}

static char	*get_line(char *line, char *buffer, ssize_t byreads)
{
	int		i;
	int		line_len;

	i = 0;
	line_len = linelen(buffer, byreads);
	free(line);
	line = (char *)malloc(line_len + 1);
	if (!line)
		ft_free(buffer);
	if (byreads == 0)
		return (NULL);
	while (i < byreads && line[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

static char	*next_line(char *line, char *buffer)
{
	int	i;
	int	rest;

	i = 0;
	free(line);
	rest = ft_strlen(ft_strchr(buffer));
	ft_free(line);
	line = (char *)malloc(rest);
	if (!line)
		return (NULL);
	line = ft_strcpy(line, ft_strchr(buffer));
	return (line);
}


char	*get_next_line(int fd)
{
	char			*buffer;
	char			*line;
	ssize_t			byreads;

	byreads = 0;
	line = NULL;
	buffer = (char *)malloc(BUFFER_SIZE);
	if (!buffer)
		return (NULL);
	byreads = read(fd, buffer, BUFFER_SIZE);
	if (byreads <= 0)
		return (NULL);
	line = next_line(line, buffer);
	line = get_line(line, buffer, byreads);
	return (line);
}

int main()
{
	char *line;
	int fd = open("test.txt", O_RDONLY);
    if (fd == -1) {
        perror("open");
        return 1;
    }
	open("test.txt", O_RDONLY);
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", get_next_line(fd));
		ft_free(line);
	}
	close(fd);
}
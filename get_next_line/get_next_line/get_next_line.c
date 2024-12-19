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

char	*get_line(char *buffer, char *stock, int fd, ssize_t byreads)
{
	int		i;

	i = 0;
	while (byreads > 0 || isbacks(buffer) != 0)
	{
		byreads = read(fd, stock, BUFFER_SIZE);
		buffer = ft_strjoin(buffer, stock);
	}
	buffer[i] = '\0';
	return (buffer);
}

char	*next_line(char *line, char *stock)
{
	int	i;

	i = 0;
	line = ft_strchr(stock);
	while (stock[i] != '\n')
	{
		line[i] = stock[i];
		i++;
	}
	return (line);
}

// char	*buffertest(char *buffer, char *stock, int fd, ssize_t byreads)
// {
// 	int	i;

// 	i = 0;
// 	while (byreads >= 0 && buffer[i] != '\n')
// 	{
// 		byreads = read(fd, stock, BUFFER_SIZE);
// 		buffer = ft_strjoin(buffer, stock);
// 		i++;
// 	}
// 	return (stock);
// }

char	*get_next_line(int fd)
{
	char		*buffer;
	ssize_t		byreads;
	char		*line;
	static char	stock[BUFFER_SIZE];

	byreads = 1;
	buffer = (char *)malloc(BUFFER_SIZE);
	if (!buffer)
		return (NULL);
	line = (char *)malloc(sizeof(char) * 800);
	if (!line)
		ft_free(buffer);
	line = get_line(buffer, stock, fd, byreads);
	// next_line(line, stock);
	free(buffer);
	return (line);
}

int main()
{
	char *line;
	int fd = open("test.txt", O_RDONLY);
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", get_next_line(fd));
		free(line);
	}

	close(fd);
}

// int main()
// {
// 	ssize_t byreads = 1;
// 	static char *stock = NULL;
// 	char *buffer = NULL;
// 	int fd = open("test.txt", O_RDONLY);

// 	stock = (char *)malloc(BUFFER_SIZE);
// 	if (!stock)
// 		return (0);
// 	buffer = (char *)malloc(BUFFER_SIZE);
// 	if (!buffer)
// 		ft_free(stock);
// 	printf("%s\n", get_line(buffer, stock, fd, byreads));
	
// 	printf("%s\n--------------------\n", buffertest(buffer, stock, fd, byreads));
// 	close(fd);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmefo <mmefo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 13:10:10 by mmefo             #+#    #+#             */
/*   Updated: 2024/12/30 17:20:04 by mmefo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_lline(char *stock, ssize_t byread, int fd)
{
	char	tmp[BUFFER_SIZE + 1];
	char	*after_nl;
	char	*buff;

	buff = calloc(1, 1);
	memset(tmp, 0, BUFFER_SIZE + 1);
	while (byread > 0 && !ft_strchr(tmp, '\n'))
	{
		byread = read(fd, tmp, BUFFER_SIZE);
		if (byread == -1)
			return (free(buff), stock[0] = 0, NULL);
		tmp[byread] = '\0';
		buff = ft_strjoin(buff, tmp);
	}
	after_nl = ft_strchr(buff, '\n');
	if (after_nl)
		strncpy(stock, after_nl, ft_strlen(after_nl) + 1);
	else
		stock[0] = 0;
	return (buff);
}

char	*get_next_line(int fd)
{
	ssize_t		byread;
	char		*line;
	static char	stock[BUFFER_SIZE + 1];

	byread = 1;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = get_lline(stock, byread, fd);
	if (!line || !line[0])
	{
		free(line);
		return (NULL);
	}
	return (line);
}

int	main(void)
{
	char	*line;
	int		fd;

	fd = open("test.txt", O_RDONLY);

	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close (fd);
}

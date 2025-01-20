/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmefo <mmefo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 13:10:10 by mmefo             #+#    #+#             */
/*   Updated: 2025/01/20 10:44:30 by mmefo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	if (!str)
		return (0);
	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strchr(const char *str, int c)
{
	int		i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (str[i] == c)
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}

char	*get_lline(char *stock, ssize_t byread, int fd)
{
	char	tmp[BUFFER_SIZE + 1];
	char	*after_nl;
	char	*buff;

	buff = ft_calloc(1, 1);
	if (!buff)
		return (NULL);
	ft_memset(tmp, 0, BUFFER_SIZE + 1);
	while (byread > 0 && !ft_strchr(tmp, '\n'))
	{
		byread = read(fd, tmp, BUFFER_SIZE);
		if (byread == -1)
			return (free(buff), stock[0] = 0, NULL);
		tmp[byread] = '\0';
		buff = ft_strjoin(buff, tmp);
		if (!buff)
			return (NULL);
	}
	after_nl = ft_strchr(buff, '\n');
	if (after_nl)
		ft_strncpy(stock, after_nl, ft_strlen(after_nl) + 1);
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

	fd = open("files/multiple_nl.txt", O_RDONLY);

	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	close (fd);
}

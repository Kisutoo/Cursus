/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmefo <mmefo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:40:42 by mmefo             #+#    #+#             */
/*   Updated: 2025/01/08 17:09:02 by mmefo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *s1, const char *s2)
{
	size_t	i;
	size_t	len1;
	size_t	len2;
	char	*new_str;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	new_str = malloc(len1 + len2 + 1);
	if (!new_str)
		return (free(s1), NULL);
	i = 0;
	while (i < len1)
	{
		new_str[i] = s1[i];
		i++;
	}
	while (i < len1 + len2)
	{
		new_str[i] = s2[i - len1];
		i++;
	}
	new_str[i] = '\0';
	free(s1);
	return (new_str);
}

void	*ft_calloc(size_t num, size_t size)
{
	void	*tab;

	if (num * size > 2147483647)
		return (NULL);
	tab = (char *)malloc(num * size);
	if (tab == NULL)
		return (NULL);
	ft_bzero(tab, num * size);
	return (tab);
}

void	*ft_memset(void *dest, int c, size_t n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		((unsigned char *)dest)[i] = (unsigned char )c;
		n--;
		i++;
	}
	return (dest);
}

void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
		n--;
	}
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int main()
// {
// 	printf("%s", ft_strchr("Bonjourree", 'r'));
// }
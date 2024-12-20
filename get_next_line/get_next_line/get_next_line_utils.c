/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmefo <mmefo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:40:42 by mmefo             #+#    #+#             */
/*   Updated: 2024/12/19 18:31:34 by mmefo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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

size_t ft_strlen(const char *str)
{
	size_t len;

	len = 0;
	while (str && str[len])
		len++;
	return (len);
}

char *ft_strdup(const char *str)
{
	size_t len;
	size_t i;
	char *dest;
	
	len = ft_strlen(str);
	dest = malloc(len + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strjoin(char *s1, const char *s2)
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
	return(new_str);
}

// int main()
// {
// 	printf("%s", ft_strchr("Bonjourree", 'r'));
// }
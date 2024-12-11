/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmefo <mmefo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:16:05 by mmefo             #+#    #+#             */
/*   Updated: 2024/10/30 15:35:01 by mmefo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char *)s)[i] == (char)c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	const char s[] = "Bien le boss";
// 	int c = 'e';
// 	size_t n = 4;

// 	printf("%s", (char *)ft_memchr((const void *)s, c, n));
// 	printf("%s", (char *)memchr((const void *)s, c, n));
// }
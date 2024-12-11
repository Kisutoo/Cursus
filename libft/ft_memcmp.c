/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmefo <mmefo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:15:25 by mmefo             #+#    #+#             */
/*   Updated: 2024/10/29 14:36:51 by mmefo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((const char *)s1)[i] == ((const char *)s2)[i])
			i++;
		else
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
	}
	return (0);
}

// int main(void)
// {
// 	const char s1[] = "Bien le boss";
// 	const char s2[] = "Bien le boss";
// 	size_t n = 8;

// 	printf("%d", ft_memcmp((const void *)s1, (const void *)s2, n));
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmefo <mmefo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:12:35 by mmefo             #+#    #+#             */
/*   Updated: 2024/10/30 19:00:17 by mmefo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (d == s || n == 0)
		return (dest);
	if (d < s)
		while (n--)
			*d++ = *s++;
	else
	{
		d += n;
		s += n;
		while (n--)
			*(--d) = *(--s);
	}
	return (dest);
}

// int	main(void)
// {
// 	unsigned char	src[] = "bonjour, le monde de fou !";
// 	size_t n = 10;

// 	printf("%s\n", (unsigned char *)ft_memmove(src + 9, src, n));
// 	printf("%s", (unsigned char *)memmove(src + 9, src, n));
// }
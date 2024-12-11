/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmefo <mmefo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:32:37 by mmefo             #+#    #+#             */
/*   Updated: 2024/11/06 20:59:46 by mmefo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	j = ft_strlen(src);
	k = 0;
	if (size == 0)
		return (j);
	i = ft_strlen(dest);
	if (size <= i)
		return (size + j);
	while (k < (size - i - 1) && src[k] != '\0')
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = '\0';
	return (i + j);
}

// int main(void)
// {
// 	char dest[] = "oezxzzzzzzzz";
// 	const char src[] = "bien";

// 	printf("%zu", ft_strlcat(dest, src, 0));
// }
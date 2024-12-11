/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmefo <mmefo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:40:26 by mmefo             #+#    #+#             */
/*   Updated: 2024/10/24 13:18:17 by mmefo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

// int	main(void)
// {
// 	char dest[] = "Bonsoir ouais";

// 	printf("%s", (char *)ft_memset(dest, '0', 4));
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmefo <mmefo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:08:35 by mmefo             #+#    #+#             */
/*   Updated: 2024/10/22 12:38:50 by mmefo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

// int	main(void)
// {
// 	char s[] = "Bonjour le boss";

// 	ft_bzero(s, 0);
// 	printf("%s", s);
// }
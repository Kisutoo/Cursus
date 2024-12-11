/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmefo <mmefo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 04:15:36 by mmefo             #+#    #+#             */
/*   Updated: 2024/11/27 20:45:06 by mmefo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_d(int nbr, unsigned int *printedchars) // putnbr
{
	const char	*base;

	base = "0123456789";
	ft_putnbr_base(nbr, base, printedchars);
}

// int main()
// {
// 	unsigned int u = 0;
// 	unsigned int *printedchars = &u;
// 	int nbr = 8;

// 	printf("%d", ft_d(nbr, printedchars));
// }
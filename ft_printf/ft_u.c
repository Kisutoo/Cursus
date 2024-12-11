/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmefo <mmefo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:57:52 by mmefo             #+#    #+#             */
/*   Updated: 2024/11/27 21:19:04 by mmefo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr(unsigned int nbr, unsigned int *printedchars)
{
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10, printedchars);
		ft_putnbr(nbr % 10, printedchars);
	}
	else
	{
		nbr += '0';
		*printedchars += write(1, &nbr, 1);
	}
}

void	ft_u(unsigned int nbr, unsigned int *printedchars)
{
	ft_putnbr(nbr, printedchars);
}

// int main()
// {
// 	unsigned int nbr;

// 	nbr = 1254854;
// 	ft_u(nbr);
// }
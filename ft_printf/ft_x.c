/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmefo <mmefo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:06:15 by mmefo             #+#    #+#             */
/*   Updated: 2024/11/28 21:38:15 by mmefo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_x(int nbr, unsigned int *printedchars)
{
	const char	*base;

	base = "0123456789abcdef";
	ft_putnbr_base(nbr, base, printedchars);
}

// int main()
// {
// 	unsigned int u = 0;
// 	unsigned int *printedchars = &u;
// 	int nbr = -44;

// 	ft_x(nbr, printedchars);
// }

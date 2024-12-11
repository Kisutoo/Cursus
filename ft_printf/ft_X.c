/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_X.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmefo <mmefo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:25:52 by mmefo             #+#    #+#             */
/*   Updated: 2024/11/27 20:49:22 by mmefo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_xgro(int nbr, unsigned int *printedchars)
{
	const char	*base;

	base = "0123456789ABCDEF";
	ft_putnbr_base(nbr, base, printedchars);
}
// int main()
// {
// 	int nbr = 145;

// 	ft_xgro(nbr);
// }
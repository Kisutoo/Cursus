/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_i.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmefo <mmefo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:44:58 by mmefo             #+#    #+#             */
/*   Updated: 2024/11/27 20:45:39 by mmefo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_i(int nbr, unsigned int *printedchars)
{
	const char	*base;

	base = "0123456789";
	ft_putnbr_base(nbr, base, printedchars);
	return ;
}

// int main()
// {
// 	int nbr = 0xad1;

// 	ft_i(nbr);
// }
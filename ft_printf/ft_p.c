/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmefo <mmefo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 04:13:31 by mmefo             #+#    #+#             */
/*   Updated: 2024/11/28 21:50:07 by mmefo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_p(long *p, unsigned int *printedchars)
{
	const char	*base;

	base = "0123456789abcdef";
	if (p == 0)
	{
		*printedchars += write(1, "(nil)", 5);
		return ;
	}
	*printedchars += write(1, "0x", 2);
	if ((long)p == LONG_MIN)
	{
		*printedchars += write(1, "8000000000000000", 16);
		return ;
	}
	if ((unsigned long long)p == ULLONG_MAX
		|| (unsigned long)p == ULONG_MAX)
	{
		*printedchars += write(1, "ffffffffffffffff", 16);
		return ;
	}
	ft_putnbr_base((long)p, base, printedchars);
}

// int main()
// {
// 	long	i = LONG_MIN;
// 	long	*j = &i;
// 	unsigned int k = 0;
// 	unsigned int *u = &k;

// 	ft_p(j, u);
// }
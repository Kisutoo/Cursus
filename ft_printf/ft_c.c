/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmefo <mmefo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 03:53:26 by mmefo             #+#    #+#             */
/*   Updated: 2024/11/27 21:18:38 by mmefo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_c(const char c, unsigned int *printedchars)
{
	*printedchars += write (1, &c, 1);
}

// int main()
// {
// 	unsigned int u = 0;
// 	unsigned int *printedchar = &u;

// 	printf("%d", ft_c(' ' , printedchar));
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmefo <mmefo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 04:12:47 by mmefo             #+#    #+#             */
/*   Updated: 2024/11/27 21:37:47 by mmefo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_s(const char *str, unsigned int *printedchars)
{
	int	i;

	i = 0;
	if (str == NULL)
		str = "(null)";
	while (str[i])
	{
		*printedchars += write(1, &str[i], 1);
		i++;
	}
	return ;
}

// int main()
// {
// 	ft_s("OUaaisus");
// }
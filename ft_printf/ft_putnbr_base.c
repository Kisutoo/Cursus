/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmefo <mmefo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:33:53 by mmefo             #+#    #+#             */
/*   Updated: 2024/11/28 21:52:35 by mmefo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	errorbase(const char *base)
{
	int	i;
	int	j;

	if (!base || ft_strlen(base) <= 1)
		return (1);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(long nbr, const char *base, unsigned int *printedchars)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (errorbase(base) != 0)
		return ;
	if (ft_strncmp(base, "0123456789abcdef", 16) == 0
		|| ft_strncmp(base, "0123456789ABCDEF", 16) == 0)
	{
		if (nbr < 0)
			nbr = (unsigned int)nbr;
	}
	if (nbr < 0)
	{
		nbr = -nbr;
		*printedchars += write(1, "-", 1);
	}
	if (nbr >= base_len)
		ft_putnbr_base(nbr / base_len, base, printedchars);
	*printedchars += write(1, &base[nbr % base_len], 1);
}

// int main()
// {
// 	unsigned int u = 0;
// 	unsigned int *printedchars = &u;
// 	const char *base = "0123456789abcdef";
// 	long nbr = -1;

// 	ft_putnbr_base(nbr, base, printedchars);
// }
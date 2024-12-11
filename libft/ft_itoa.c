/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmefo <mmefo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:50:07 by mmefo             #+#    #+#             */
/*   Updated: 2024/11/06 17:32:51 by mmefo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	n_len(size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

void	put_in_char(int l, int s, size_t big_n, char *res)
{
	int	i;

	i = 0;
	while (l - 1 - i >= s)
	{
		res[l - 1 - i] = 48 + (big_n % 10);
		big_n = big_n / 10;
		i++;
	}
	res[l] = '\0';
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	big_n;
	int		l;
	int		s;

	s = 0;
	big_n = n;
	if (n < 0)
	{
		big_n = big_n * -1;
		s = 1;
	}
	l = n_len(big_n) + s;
	res = (char *)malloc((l + 1) * sizeof(char));
	if (!res)
		return (NULL);
	if (s == 1)
		res[0] = '-';
	put_in_char(l, s, big_n, res);
	return (res);
}

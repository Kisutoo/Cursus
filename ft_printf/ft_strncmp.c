/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmefo <mmefo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:54:20 by mmefo             #+#    #+#             */
/*   Updated: 2024/11/26 14:56:58 by mmefo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int i)
{
	int				j;
	unsigned int	k;

	k = 0;
	j = 0;
	while (k < i)
	{
		if (s1[j] < s2[j] || s1[j] > s2[j])
			return (s1[j] - s2[j]);
		else
			j++;
		k++;
	}
	return (0);
}

// int main()
// {
// 	const char	*a = "plnneyvif";
// 	const char	*b = "poneyvif";

// 	printf("%d", ft_strncmp(a, b, 2));
// }
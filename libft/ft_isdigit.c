/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmefo <mmefo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:15:17 by mmefo             #+#    #+#             */
/*   Updated: 2024/10/22 12:38:43 by mmefo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_isdigit(int a)
{
	if ((a >= 48) && (a <= 57))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	int	a = '9';

// 	printf("%d", ft_isdigit(a));
// }
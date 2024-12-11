/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmefo <mmefo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:39:54 by mmefo             #+#    #+#             */
/*   Updated: 2024/11/04 18:04:04 by mmefo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*tab;

	if (num * size > 2147483647)
		return (NULL);
	tab = (char *)malloc(num * size);
	if (tab == NULL)
		return (NULL);
	ft_bzero(tab, num * size);
	return (tab);
}

// int main(void)
// {

// }
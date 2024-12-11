/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmefo <mmefo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:27:15 by mmefo             #+#    #+#             */
/*   Updated: 2024/11/04 15:29:37 by mmefo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (j < len && haystack[j])
	{
		if (needle[i] != haystack[j])
			i = 0;
		while (haystack[i + j] && needle[i]
			&& i + j < len && haystack[i + j] == needle[i])
			i++;
		if (!needle[i])
			return ((char *)haystack + j);
		j++;
	}
	return (NULL);
}

// int main(void)
// {
// 	const char oui[] = "le";
// 	const char needle[] = "Bien le bonsour";
// 	size_t len = 30;

// 	printf("%s\n", ft_strnstr(needle, oui, len));
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmefo <mmefo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:13:54 by mmefo             #+#    #+#             */
/*   Updated: 2024/11/06 21:02:00 by mmefo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*dest;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_isset(s1[i], set))
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_isset(s1[j - 1], set))
		j--;
	dest = (char *)malloc(sizeof(*s1) * (j - i + 1));
	if (!dest)
		return (NULL);
	k = 0;
	while (i < j)
		dest[k++] = s1[i++];
	dest[k] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	const char s1[] = "xxxz  test with x and z and x .  zx  xx z";
// 	const char set[] = "z x";

// 	printf("%s", ft_strtrim(s1, set));
// }
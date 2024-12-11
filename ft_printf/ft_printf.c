/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmefo <mmefo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:24:10 by mmefo             #+#    #+#             */
/*   Updated: 2024/12/11 13:35:58 by mmefo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	printres(const char *arg0, va_list ap, unsigned int *printedchars)
{
	if (ft_strncmp(arg0, "c", 1) == 0)
		ft_c(va_arg(ap, int), printedchars);
	else if (ft_strncmp(arg0, "s", 1) == 0)
		ft_s(va_arg(ap, const char *), printedchars);
	else if (ft_strncmp(arg0, "p", 1) == 0)
		ft_p(va_arg(ap, void *), printedchars);
	else if (ft_strncmp(arg0, "d", 1) == 0 || ft_strncmp(arg0, "i", 1) == 0)
		ft_d(va_arg(ap, int), printedchars);
	else if (ft_strncmp(arg0, "u", 1) == 0)
		ft_u(va_arg(ap, unsigned int), printedchars);
	else if (ft_strncmp(arg0, "x", 1) == 0)
		ft_x(va_arg(ap, int), printedchars);
	else if (ft_strncmp(arg0, "X", 1) == 0)
		ft_xgro(va_arg(ap, int), printedchars);
	else if (ft_strncmp(arg0, "%", 1) == 0)
		ft_percent(printedchars);
	return (0);
}

int	ft_printf(const char *arg0, ...)
{
	va_list			ap;
	unsigned int	printedchars;

	printedchars = 0;
	va_start (ap, arg0);
	while (*arg0)
	{
		if (*arg0 == '%')
		{
			arg0++;
			printedchars += printres(arg0, ap, &printedchars);
		}
		else
			printedchars += write(1, arg0, 1);
		arg0++;
	}
	va_end(ap);
	return (printedchars);
}

// int	main(void)
// {
// 	printf("%d\n\n", ft_printf(" %p %p ", (void *)LONG_MIN, (void *)LONG_MAX));
// 	printf("%d", printf(" %p %p ", (void *)LONG_MAX, (void *)LONG_MAX));
// }

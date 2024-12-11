/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmefo <mmefo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:36:06 by mmefo             #+#    #+#             */
/*   Updated: 2024/11/27 22:32:43 by mmefo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

int		ft_printf(const char *arg0, ...);
void	ft_c(const char c, unsigned int *printedchars);
void	ft_s(const char *str, unsigned int *printedchars);
void	ft_u(unsigned int nbr, unsigned int *printedchars);
void	ft_x(int nbr, unsigned int *printedchars);
void	ft_xgro(int nbr, unsigned int *printedchars);
void	ft_p(long *p, unsigned int *printedchars);
void	ft_d(int nbr, unsigned int *printedchars);
void	ft_i(int nbr, unsigned int *printedchars);
void	ft_percent(unsigned int *printedchars);
int		ft_strncmp(const char *s1, const char *s2, unsigned int i);
int		ft_strlen(const char *str);
char	ft_putstr(const char *str);
void	ft_putnbr_base(long nbr, const char *base, unsigned int *printedchars);

#endif

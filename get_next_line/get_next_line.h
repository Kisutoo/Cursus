/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmefo <mmefo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:25:08 by mmefo             #+#    #+#             */
/*   Updated: 2025/01/08 17:09:10 by mmefo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, const char *s2);
char	*ft_strdup(const char *str);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int c);
void	*ft_calloc(size_t num, size_t size);
void	*ft_memset(void *dest, int c, size_t n);
void	ft_bzero(void *s, size_t n);
char	*ft_strncpy(char *dest, char *src, unsigned int n);

#endif
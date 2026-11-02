/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waihein <waihein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 16:06:19 by waihein           #+#    #+#             */
/*   Updated: 2026/11/02 16:06:20 by waihein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	ft_char(int *i, int *count, char c);
void	ft_str(int *i, int *count, char *str);
void	ft_deci(int *i, int *count, int n);
char	*ft_uitoa(unsigned int n);
void	ft_u(int *i, int *count, unsigned int n);
char	*ft_hextoa(unsigned long n, int u);
void	ft_hex(int *i, int *count, unsigned long n, char c);
void	ft_pointer(int *i, int *count, void *ptr);

#endif
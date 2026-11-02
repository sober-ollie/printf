/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waihein <waihein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:59:52 by waihein           #+#    #+#             */
/*   Updated: 2026/11/02 16:02:29 by waihein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_str(int *i, int *count, char *str)
{
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		(*count) += 6;
		(*i)++;
		return ;
	}
	ft_putstr_fd(str, 1);
	(*count) += ft_strlen(str);
	(*i)++;
}

void	ft_print_number(int *i, int *count, char *str)
{
	if (!str)
		return ;
	ft_putstr_fd(str, 1);
	(*count) += ft_strlen(str);
	(*i)++;
	free(str);
}

void	ft_deci(int *i, int *count, int n)
{
	char	*str;

	str = ft_itoa(n);
	ft_print_number(i, count, str);
}

void	ft_u(int *i, int *count, unsigned int n)
{
	char	*str;

	str = ft_uitoa(n);
	ft_print_number(i, count, str);
}

void	ft_hex(int *i, int *count, unsigned long n, char c)
{
	char	*str;

	if (c == 'x')
		str = ft_hextoa(n, 0);
	else
		str = ft_hextoa(n, 1);
	ft_print_number(i, count, str);
}

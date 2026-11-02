/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waihein <waihein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:43:31 by waihein           #+#    #+#             */
/*   Updated: 2026/11/02 16:02:22 by waihein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_conversion(const char *format, va_list args,
		int *i, int *count)
{
	if (format[*i + 1] == 'c')
		ft_char(i, count, va_arg(args, int));
	else if (format[*i + 1] == 's')
		ft_str(i, count, va_arg(args, char *));
	else if (format[*i + 1] == '%')
		ft_char(i, count, '%');
	else if (format[*i + 1] == 'd' || format[*i + 1] == 'i')
		ft_deci(i, count, va_arg(args, int));
	else if (format[*i + 1] == 'u')
		ft_u(i, count, va_arg(args, unsigned int));
	else if (format[*i + 1] == 'x' || format[*i + 1] == 'X')
		ft_hex(i, count, va_arg(args, unsigned int), format[*i + 1]);
	else if (format[*i + 1] == 'p')
		ft_pointer(i, count, va_arg(args, void *));
}

int	input_handle(const char *format, va_list args)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
			handle_conversion(format, args, &i, &count);
		else
		{
			ft_putchar_fd(format[i], 1);
			count++;
		}
		i++;
	}
	return (count);
}

void	ft_char(int *i, int *count, char c)
{
	ft_putchar_fd(c, 1);
	(*count)++;
	(*i)++;
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	if (!format)
		return (-1);
	va_start(args, format);
	count = input_handle(format, args);
	va_end(args);
	return (count);
}

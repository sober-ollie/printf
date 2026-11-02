/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waihein <waihein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 16:04:00 by waihein           #+#    #+#             */
/*   Updated: 2026/11/02 16:05:13 by waihein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

int	hlen(unsigned long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

char	*ft_uitoa(unsigned int n)
{
	char	*str;
	int		i;

	i = len(n);
	str = malloc(i + 1);
	if (!str)
		return (NULL);
	str[i] = '\0';
	i--;
	while (i >= 0)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (str);
}

char	*ft_hextoa(unsigned long n, int u)
{
	char	*str;
	int		len;
	char	*base;

	len = hlen(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	base = "0123456789abcdef";
	str[len] = '\0';
	len--;
	while (len >= 0)
	{
		if (u)
			str[len] = ft_toupper(base[(n % 16)]);
		else
			str[len] = base[(n % 16)];
		len--;
		n = n / 16;
	}
	return (str);
}

void	ft_pointer(int *i, int *count, void *ptr)
{
	unsigned long	add;

	if (!ptr)
	{
		ft_putstr_fd("(nil)", 1);
		(*count) += 5;
		(*i)++;
		return ;
	}
	ft_putstr_fd("0x", 1);
	(*count) += 2;
	add = (unsigned long)ptr;
	ft_hex(i, count, add, 'x');
}

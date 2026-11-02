/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waihein <waihein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 02:06:49 by waihein           #+#    #+#             */
/*   Updated: 2026/10/16 17:01:41 by waihein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_str(int n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		len++;
		if (n % 10 != 0)
			n = -(n + 1);
		else
			n = -n;
	}
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

void	negative(int n, char *str, int *i)
{
	if (n < 0)
	{
		str[0] = '-';
		while (n < 0)
		{
			str[*i] = -(n % 10) + '0';
			n = n / 10;
			(*i)--;
		}
	}
}

void	positive(int n, char *str, int *i)
{
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		str[*i] = (n % 10) + '0';
		n = n / 10;
		(*i)--;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		i;

	len = len_str(n);
	i = len - 1;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	if (n < 0)
		negative(n, str, &i);
	if (n >= 0)
		positive(n, str, &i);
	str[len] = '\0';
	return (str);
}

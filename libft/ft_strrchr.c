/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waihein <waihein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 15:08:51 by waihein           #+#    #+#             */
/*   Updated: 2026/10/15 15:09:23 by waihein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	l;

	l = 0;
	while (s[l])
	{
		l++;
	}
	while (l >= 0)
	{
		if ((unsigned char)c == (unsigned char)s[l])
			return ((char *)&s[l]);
		l--;
	}
	return (NULL);
}

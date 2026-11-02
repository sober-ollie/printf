/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waihein <waihein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 15:05:36 by waihein           #+#    #+#             */
/*   Updated: 2026/10/15 15:00:29 by waihein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int					i;
	const unsigned char	*ptr;

	i = 0;
	ptr = (const unsigned char *)s;
	while (ptr[i])
	{
		if ((unsigned char)c == ptr[i])
			return ((char *)&ptr[i]);
		i++;
	}
	if (ptr[i] == (unsigned char)c)
		return ((char *)&ptr[i]);
	return (NULL);
}

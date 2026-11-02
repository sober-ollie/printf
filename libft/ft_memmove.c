/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waihein <waihein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 19:40:34 by waihein           #+#    #+#             */
/*   Updated: 2026/10/15 13:25:31 by waihein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*des;
	const unsigned char	*sr;

	des = (unsigned char *)dest;
	sr = (const unsigned char *)src;
	if (n == 0 || dest == src)
		return (dest);
	if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			i--;
			des[i] = sr[i];
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}

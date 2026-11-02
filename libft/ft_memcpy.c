/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waihein <waihein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 18:32:48 by waihein           #+#    #+#             */
/*   Updated: 2026/10/15 13:24:54 by waihein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*des;
	const unsigned char	*sr;

	i = 0;
	des = (unsigned char *)dest;
	sr = (const unsigned char *)src;
	while (i < n)
	{
		des[i] = sr[i];
		i++;
	}
	return (dest);
}

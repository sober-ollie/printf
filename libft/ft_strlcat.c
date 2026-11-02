/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waihein <waihein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 20:36:04 by waihein           #+#    #+#             */
/*   Updated: 2026/10/15 13:31:17 by waihein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	size_t	dlen;

	i = 0;
	len = 0;
	dlen = 0;
	while (src[len])
		len++;
	while (dlen < size && dst[dlen])
		dlen++;
	if (size == 0)
		return (dlen + len);
	while (src[i] && (dlen + i) < size -1)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	if ((dlen + i) < size)
		dst[dlen + i] = '\0';
	return (dlen + len);
}

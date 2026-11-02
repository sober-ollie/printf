/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waihein <waihein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 22:29:20 by waihein           #+#    #+#             */
/*   Updated: 2026/10/15 15:43:10 by waihein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	found;

	i = 0;
	while (s1[i])
	{
		found = 0;
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				found = 1;
			j++;
		}
		if (!found)
			return (i);
		i++;
	}
	return (i);
}

size_t	ft_end(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	found;

	i = ft_strlen(s1);
	while (i > 0)
	{
		found = 0;
		j = 0;
		while (set[j])
		{
			if (s1[i - 1] == set[j])
				found = 1;
			j++;
		}
		if (!found)
			return (i - 1);
		i--;
	}
	return (i);
}

char	*all_trim(void)
{
	char	*str;

	str = malloc(1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*str;

	if (s1[0] == '\0')
		return (all_trim());
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if (start > end)
		return (all_trim());
	str = malloc(end - start + 2);
	if (!str)
		return (NULL);
	i = 0;
	while (start + i <= end)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

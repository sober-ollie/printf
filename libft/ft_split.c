/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waihein <waihein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 14:33:54 by waihein           #+#    #+#             */
/*   Updated: 2026/10/12 17:51:39 by waihein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_split(char **result, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static char	*create_str(char const *s, int start, int length)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char) * (length + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < length)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static char	*create_word(char const *s, char c, int *i, int *error)
{
	int		start;
	int		length;
	char	*word;

	while (s[*i] == c && s[*i])
		(*i)++;
	if (!s[*i])
		return (NULL);
	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	length = *i - start;
	word = create_str(s, start, length);
	if (!word)
		*error = 1;
	return (word);
}

static int	word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		a;
	int		error;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	a = 0;
	error = 0;
	while (s[i] && !error)
	{
		result[a] = create_word(s, c, &i, &error);
		if (result[a])
			a++;
	}
	if (error)
		return (free_split(result, a), NULL);
	result[a] = NULL;
	return (result);
}

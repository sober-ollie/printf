/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waihein <waihein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 14:36:22 by waihein           #+#    #+#             */
/*   Updated: 2026/10/12 16:59:42 by waihein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	operation(t_list **result, t_list *new, t_list **last)
{
	if (*result == NULL)
	{
		*result = new;
		*last = new;
	}
	else
	{
		(*last)->next = new;
		*last = new;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*new;
	t_list	*last;

	result = NULL;
	if (!f)
		return (NULL);
	while (lst)
	{
		new = malloc(sizeof(t_list));
		if (!new)
			return (ft_lstclear(&result, del), NULL);
		new->content = f(lst->content);
		new->next = NULL;
		operation(&result, new, &last);
		lst = lst->next;
	}
	return (result);
}

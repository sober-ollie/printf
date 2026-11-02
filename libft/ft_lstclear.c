/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waihein <waihein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 14:46:34 by waihein           #+#    #+#             */
/*   Updated: 2026/10/12 17:29:36 by waihein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;

	if (!del || !lst)
		return ;
	while ((*lst) != NULL)
	{
		del((*lst)->content);
		next = (*lst)->next;
		free(*lst);
		(*lst) = next;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkadaik <shkadaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 12:21:57 by shkadaik          #+#    #+#             */
/*   Updated: 2021/08/10 00:33:45 by shkadaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_delete(t_list *list, void (*del)(void *))
{
	while (list)
	{
		(*del)(list->content);
		list = list->next;
	}
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	ft_delete(*lst, del);
	*lst = NULL;
}

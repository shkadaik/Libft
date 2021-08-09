/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkadaik <shkadaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 12:21:44 by shkadaik          #+#    #+#             */
/*   Updated: 2021/08/09 12:24:58 by shkadaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_addlast(t_list *alst, t_list *new)
{
	while (alst)
		alst = alst->next;
	alst = new;
}

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	ft_addlast(*alst, new);
}

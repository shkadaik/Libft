/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkadaik <shkadaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 03:36:17 by shkadaik          #+#    #+#             */
/*   Updated: 2021/07/25 09:12:21 by shkadaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{	
	void	*tab;

	tab = malloc(nmemb * size);
	if (!tab)
		return (NULL);
	return (ft_memset(tab, 0, nmemb * size));
}
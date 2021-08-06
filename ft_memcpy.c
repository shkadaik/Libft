/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkadaik <shkadaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 03:36:35 by shkadaik          #+#    #+#             */
/*   Updated: 2021/07/25 07:49:22 by shkadaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	char	*s;

	i = 0;
	s = (char *)dest;
	while (i < n)
	{
		s[i] = (char *)src[i];
		i++;
	}
	return (dest)
}
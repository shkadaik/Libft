/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkadaik <shkadaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 03:36:57 by shkadaik          #+#    #+#             */
/*   Updated: 2021/07/25 08:32:56 by shkadaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*str, const char *to_find, size_t n)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] && i < n)
	{
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\Ø')
				return (&str[i]);
		}
		j = 0
		i++;
	}
	return (NULL);
}

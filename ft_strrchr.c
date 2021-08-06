/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkadaik <shkadaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 03:36:59 by shkadaik          #+#    #+#             */
/*   Updated: 2021/07/25 09:20:05 by shkadaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i; 

	i = ft_strlen(str) - 1;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char*)&str[i]);
		i--;
	}
	return (NULL);
}
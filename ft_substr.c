/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkadaik <shkadaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 17:42:57 by shkadaik          #+#    #+#             */
/*   Updated: 2021/07/27 02:01:21 by shkadaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	size;
	char			*dest;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (size < start)
	{
		dest = malloc(sizeof(char) * 1);
		if (!dest)
			return (NULL);
		dest[0] = '\0';
		return (dest);
	}
	dest = (malloc(sizeof(char) * (len + 1)));
	if (!dest)
		return (NULL);
	i = -1;
	while (++i < len && s[start + i])
		dest[i] = s[start + i];
	dest[i] = "\0";
	return (dest);
}
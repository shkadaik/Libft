/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkadaik <shkadaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 01:13:31 by shkadaik          #+#    #+#             */
/*   Updated: 2021/08/10 01:17:27 by shkadaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char c, char const *set)
{
	int i;

	i = 0;
	if (c && set)
	{
		while (set[i])
		{
			if (c == set[i])
				return (1);
			else
				i++;
		}
	}
	return (0);
}

static char	*newstr(char *str, int i, int j, int k)
{
	char	*new;

	if (!(new = (char *)malloc(sizeof(char) * (ft_strlen(str) - k) + 1)))
		return (NULL);
	k = 0;
	while (i != j + 1)
	{
		new[k] = str[i];
		k++;
		i++;
	}
	new[k] = '\0';
	return (new);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*new;

	if ((!s1) || ((!s1) && (!set)))
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	k = 0;
	while ((s1[i]) && ft_check(s1[i], set) == 1)
	{
		k++;
		i++;
	}
	if (s1[i] != '\0')
	{
		while ((s1[j]) && ft_check(s1[j], set) == 1)
		{
			k++;
			j--;
		}
	}
	new = newstr((char *)s1, i, j, k);
	return (new);
}
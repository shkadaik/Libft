/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkadaik <shkadaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 02:01:49 by shkadaik          #+#    #+#             */
/*   Updated: 2021/08/07 13:04:20 by nassim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char const *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		is_charset(char c, char charset)
{
	if (c == charset)
		return (1);
	return (0);
}

int		count_words(char const *str, char charset)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_charset(str[i], charset))
			i++;
		if (str[i] && !is_charset(str[i], charset))
			count++;
		while (str[i] && !is_charset(str[i], charset))
			i++;
	}
	return (count);
}

char	*ft_strduup(char const *str, char charset)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (is_charset(str[i], charset))
			break ;
		i++;
	}
	dest = (char*)malloc(sizeof(char) * i + 1);
	if (!dest)
		return (NULL);
	dest = ft_strncpy(dest, str, i);
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**tab;

	tab = (char **)malloc(sizeof(char*) * count_words(s, c) + 1);
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] && j < count_words(s, c))
	{
		while (s[i] && is_charset(s[i], c))
			i++;
		if (s[i] && !is_charset(s[i], c))
		{
			tab[j] = ft_strduup(s + i, c);
			j++;
		}
		while (s[i] && !is_charset(s[i], c))
			i++;
		}
	tab[j] = 0;
	return (tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkadaik <shkadaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 18:22:50 by shkadaik          #+#    #+#             */
/*   Updated: 2021/08/09 13:09:34 by shkadaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	int		i;
	int		j;
	char	*str;

	i = -1;
	j = -1;
	if (s1 && s2)
	{
		len = ft_strlen(s1) + ft_strlen(s2) + 1;
		str = ((char*)malloc(sizeof(char) * len));
		if (!str)
			return(NULL);
		while(s1[++i])
			str[i] = s1[i];

		while (s2[++j])
			str[i++] = s2[j];
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}

int		main()
{
	char	s1[] = "shazz";
	char	s2[] = "shelby";

	printf("%s", ft_strjoin(s1, s2));
	
}

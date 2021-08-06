/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkadaik <shkadaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 03:36:30 by shkadaik          #+#    #+#             */
/*   Updated: 2021/07/26 19:30:48 by shkadaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;

	str = (unsigned char*)s;
	while (n--)
	{
		if (*str == (unsigned char)c)
			return (str);
		str++;
	}
	return (NULL);
}

int    main(void)
{
    char    test[] = "abcdef";

    printf("%s\n", ft_memchr(test, 'c', 5));
    ft_memchr(test, 'c', 5);
    ft_memchr(test, '\0', 7), 
    ft_memchr(test, 'z', 6);

 
    return (0);

}
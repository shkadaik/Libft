/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkadaik <shkadaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 03:36:37 by shkadaik          #+#    #+#             */
/*   Updated: 2021/08/10 01:08:12 by shkadaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    char    *s1;
    char    *s2;

    s1 = (char *)dest;
    s2 = (char *)src;
    if (s1 < s2)
    {
        while (n--)
            s1[n] = s2[n];
    }
    else
        ft_memcpy(dest, src, n);
    return (dest);
}
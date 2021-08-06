/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkadaik <shkadaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 03:36:37 by shkadaik          #+#    #+#             */
/*   Updated: 2021/07/25 09:45:18 by shkadaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    if (src < dest)
    {
        while (n--)
            (char *)dest[n] = (char *)src[n];
    }
    else
        ft_memcpy(dest, src, n);
    return (dest);
}
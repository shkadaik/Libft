/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkadaik <shkadaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 12:23:39 by shkadaik          #+#    #+#             */
/*   Updated: 2021/08/10 01:12:24 by shkadaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_put_fd(char *c, int fd)
{
	write(fd, c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		ft_put_fd(s++, fd);
}

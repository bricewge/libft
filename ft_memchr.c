/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <bwaegene@sutdent.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 17:15:37 by bwaegene          #+#    #+#             */
/*   Updated: 2016/12/21 11:55:05 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = -1;
	while (++i < n)
		if (((t_byte *)s)[i] == ((t_byte)c))
			return (&((t_byte *)s)[i]);
	return (NULL);
}

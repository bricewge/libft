/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <bwaegene@sutdent.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 14:52:13 by bwaegene          #+#    #+#             */
/*   Updated: 2016/12/20 17:13:03 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	while (n--)
		((t_byte *)dst)[n] = ((t_byte *)src)[n];
	return (dst);
}
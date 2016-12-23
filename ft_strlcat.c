/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <bwaegene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/23 15:21:36 by bwaegene          #+#    #+#             */
/*   Updated: 2016/12/23 17:10:37 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		j;

	i = ft_strlen(dst);
	j = 0;
	while (i + j < size - 1)
	{
		dst[i + j] = src[j];
		++j;
	}
	dst[i + j] = '\0';
	return (sizeof(dst) + sizeof(src));
}

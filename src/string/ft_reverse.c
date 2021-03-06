/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <bwaegene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 19:24:35 by bwaegene          #+#    #+#             */
/*   Updated: 2017/10/02 12:30:28 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Reverse an array of `nel` objects, the initial member of which is pointed to
** by `base`. The size of each is specified by `width`.
*/

void	ft_reverse(void *base, size_t nel, size_t width)
{
	size_t	i;

	if (base == NULL || nel <= 1 || width <= 0)
		return ;
	i = -1;
	while (++i <= --nel)
		ft_swap((size_t *)base + (i * width),
				(size_t *)base + (nel * width), width);
}

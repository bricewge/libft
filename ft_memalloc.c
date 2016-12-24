/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <bwaegene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/24 17:34:04 by bwaegene          #+#    #+#             */
/*   Updated: 2016/12/24 17:53:43 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*result;

	result = (void *)malloc(sizeof(void *) * size);
	if (result)
	{
		ft_memset(result, 0, size);
		return (result);
	}
	return (NULL);
}

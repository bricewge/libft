/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <bwaegene@sutdent.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 14:59:46 by bwaegene          #+#    #+#             */
/*   Updated: 2016/12/21 14:15:55 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dup;

	dup = (char*)malloc(sizeof(*dup) * ft_strlen(src) + 1);
	return (dup ? ft_strcpy(dup, src) : NULL);
}

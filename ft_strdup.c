/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 00:55:54 by bwaegene          #+#    #+#             */
/*   Updated: 2016/07/08 01:13:03 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

char	*ft_strdup(char *src)
{
	char	*dup;

	dup = (char*)malloc(sizeof(*dup) * ft_strlen(src) + 1);
	return (ft_strcpy(dup, src));
}

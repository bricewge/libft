/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <bwaegene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 14:58:19 by bwaegene          #+#    #+#             */
/*   Updated: 2016/12/23 14:52:41 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		len1;
	int		len2;

	len1 = ft_strlen(s1);
	len2 = 0;
	while (s2[len2])
	{
		s1[len1 + len2] = s2[len2];
		len2++;
	}
	s1[len1 + len2] = '\0';
	return (s1);
}

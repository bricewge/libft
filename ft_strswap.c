/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <bwaegene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 15:01:00 by bwaegene          #+#    #+#             */
/*   Updated: 2016/12/29 05:46:57 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strswap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

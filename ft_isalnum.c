/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 13:57:11 by bwaegene          #+#    #+#             */
/*   Updated: 2016/07/09 15:23:34 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

int    ft_isalnum(int c)
{
  return (ft_isalpha(c) || ft_isdigit(c));
}

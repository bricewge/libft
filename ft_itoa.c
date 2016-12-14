/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 16:39:21 by bwaegene          #+#    #+#             */
/*   Updated: 2016/07/22 16:42:38 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_itoa(int nb)
{
	static char str_buf[12];
	char		*str_dup;
	int			neg;

	if (nb == -2147483648)
		return ("-2147483648");
	str_dup = str_buf + 11;
	if (nb < 0)
	{
		neg = 1;
		nb = nb * -1;
	}
	else
		neg = 0;
	while (1)
	{
		*--str_dup = (nb % 10) + '0';
		nb /= 10;
		if (!nb)
			break ;
	}
	if (neg)
		*--str_dup = '-';
	return (str_dup);
}

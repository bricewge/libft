/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <bwaegene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 14:55:53 by bwaegene          #+#    #+#             */
/*   Updated: 2016/12/21 15:16:05 by bwaegene         ###   ########.fr       */
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

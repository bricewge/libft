/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 20:40:18 by bwaegene          #+#    #+#             */
/*   Updated: 2016/12/21 12:57:28 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>
# include <stdlib.h>

typedef	unsigned char	t_byte;
int		ft_putchar(int c);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
void	ft_swap(int *a, int *b);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(char *src);


/* First part */
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii (int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
/* Second part */
int		ft_atoi(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

/* Bonus functions */
int		ft_isupper(int c);
int		ft_islower(int c);
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <bwaegene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 20:40:18 by bwaegene          #+#    #+#             */
/*   Updated: 2016/12/22 10:55:24 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

typedef	unsigned char	t_byte;
/*
** First part
*/
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strlen(char *str);
char	*ft_strdup(char *src);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strcat(char *dest, char *src);
char	*ft_strstr(const char *big, const char *little);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii (int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
/*
** Second part
*/
int		ft_atoi(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
char	*ft_itoa(int nb);
int		ft_putchar(int c);
/*
** Bonus functions
*/
int		ft_isupper(int c);
int		ft_islower(int c);
void	ft_swap(int *a, int *b);
#endif

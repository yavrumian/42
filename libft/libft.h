/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyavrumy <vyavrumy@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:14:27 by vyavrumy          #+#    #+#             */
/*   Updated: 2022/12/07 16:14:29 by vyavrumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
/* ############### >> REMEMBER TO DELETE << ################### */
# include <unistd.h>
# include <stdio.h>
# include <stddef.h>
# include <string.h>

int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_bzero(void *s, size_t n);
int		ft_atoi(const char *str);
char	*ft_strnstr(char *haystack, char *needle, size_t len);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
#endif

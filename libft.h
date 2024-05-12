/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilippo <afilippo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:10:18 by afilippo          #+#    #+#             */
/*   Updated: 2024/05/08 20:09:27 by afilippo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

int		ft_atoi(char *str);
void	ft_bzero(void *dst, size_t n);
void	*ft_calloc(size_t number, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(char *str);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_memcpy(void *dst, const void *src, size_t n);
void	ft_memmove(void *str1, const void *str2, size_t n);
void	ft_memset(void *str, int c, size_t l);
char	*ft_strchr(const char *s, int c);
// add other func after this line 

int		ft_strlen(const char *str);
char	*ft_strdup(const char *s);

#endif

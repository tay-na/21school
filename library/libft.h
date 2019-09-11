/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tollivan <tollivan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 18:00:50 by tollivan          #+#    #+#             */
/*   Updated: 2019/09/11 15:56:00 by tollivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void		ft_bzero(void *s, size_t n);
void		*ft_memset(void *b, int c, size_t len);
char		*ft_strcat(char *str1, char *str2);
char		*ft_strcpy(char *dst, const char *src);
char		*ft_strdup(const char *str);
size_t		ft_strlen(const char *str);
char		*ft_strncat(char *str1, const char *str2, size_t n);
char		*ft_strncpy(char *dst, const char *src, size_t len);
const char	*ft_strstr(const char *src, const char *dst);
void		ft_putchar(char c);
void		ft_putstr(char const *str);
void		ft_putendl(char const *str);
void		ft_putnbr(int n);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char const *str, int fd);
void		ft_putendl_fd(char const *str, int fd);
void		ft_putnbr_fd(int n, int fd);
int			ft_isdigit(int c);
int			ft_isalpha(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_strcmp(const char *s1, const char *s2);
void		ft_strclr(char *s);
void		*ft_memalloc(size_t size);
void		ft_memdel(void **ap);
char		*ft_strnew(size_t size);
void		ft_strdel(char **as);
void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char 		*ft_strmap(char const *s, char (*f)(char));
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);

#endif

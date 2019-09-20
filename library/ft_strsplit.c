/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tollivan <tollivan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 19:19:28 by tollivan          #+#    #+#             */
/*   Updated: 2019/09/19 22:07:51 by tollivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(const char *s, char c)
{
	int			i;
	size_t		count;

	i = 0;
	count = 0;
	if (!s[0])
		return (0);
	if (s[0] != c)
		count++;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}

static	size_t	ft_wordlen(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
	{
		len++;
	}
	return (len);
}

static char		*ft_copy(const char *s, size_t len)
{
	char	*dst;

	dst = (char *)ft_memalloc(sizeof(char) * len + 1);
	dst = ft_strncpy(dst, s, len);
	return (dst);
}

static void		ft_free(char **s, size_t i)
{
	while (i > 0)
	{
		free(s[i]);
		i--;
	}
	free(s);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**dst;
	size_t	len;
	size_t	i;
	int		j;

	if (!s)
		return (NULL);
	len = ft_count(s, c);
	if (!(dst = (char **)ft_memalloc(sizeof(char *) * (len + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (i < len)
	{
		while (s[j] == c)
			j++;
		if (!(dst[i] = ft_copy(&s[j], ft_wordlen(&s[j], c))))
		{
			ft_free(dst, i);
			return (0);
		}
		j += ft_wordlen(&s[j], c);
		i++;
	}
	return (dst);
}

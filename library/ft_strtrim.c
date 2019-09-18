/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tollivan <tollivan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 17:35:05 by tollivan          #+#    #+#             */
/*   Updated: 2019/09/17 19:17:13 by tollivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_whitespace(char s)
{
	return (s == ' ' || s == '\n' || s == '\t');
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	char	*dst;

	if (!s)
		return (0);
	i = 0;
	len = ft_strlen(s) - 1;
	while (ft_whitespace(s[i]))
		i++;
	while (len > i && ft_whitespace(s[len]))
		len--;
	if (len < i)
		return (dst = ft_strdup(""));
	len = len - i + 1;
	return (dst = ft_strsub(s, i, len));
}

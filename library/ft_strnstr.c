/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tollivan <tollivan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:29:11 by tollivan          #+#    #+#             */
/*   Updated: 2019/09/12 14:24:20 by tollivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *dst, size_t len)
{
	char	*tmp;
	size_t	dlen;
	size_t	left;

	tmp = (char *)src;
	if (*dst == '\0')
		return ((char *)src);
	left = len;
	dlen = (size_t)ft_strlen(dst);
	while (*tmp && left >= dlen)
	{
		if (*tmp == *dst)
		{
			if (ft_strncmp(dst, tmp, dlen) == 0)
				return (tmp);
		}
		left--;
		tmp++;
	}
	return (0);
}

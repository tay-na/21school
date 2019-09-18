/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tollivan <tollivan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 18:15:03 by tollivan          #+#    #+#             */
/*   Updated: 2019/09/16 18:53:26 by tollivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_ismin(size_t size, size_t dst)
{
	if (size < dst)
		return (size);
	else
		return (dst);
}

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ret;
	size_t	n;
	size_t	i;

	i = 0;
	n = size;
	ret = ft_ismin(size, ft_strlen(dst)) + ft_strlen(src);
	while (dst[i] != '\0' && n--)
		i++;
	n = size - i;
	dst = dst + i;
	if (n != 0)
	{
		while (*src)
		{
			if (n != 1)
			{
				*dst++ = *src;
				n--;
			}
			src++;
		}
		*dst = '\0';
	}
	return (ret);
}

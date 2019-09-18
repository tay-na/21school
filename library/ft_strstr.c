/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tollivan <tollivan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 22:34:51 by tollivan          #+#    #+#             */
/*   Updated: 2019/09/15 22:30:19 by tollivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	compare(const char *src, const char *dst)
{
	while (*src && *dst)
	{
		if (*src != *dst)
			return (0);
		src++;
		dst++;
	}
	return (*dst == '\0');
}

const char	*ft_strstr(const char *src, const char *dst)
{
	if (*dst == '\0')
		return (src);
	if (*src)
	{
		while (*src)
		{
			if ((*src == *dst) && compare(src, dst))
				return (src);
			src++;
		}
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tollivan <tollivan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 14:15:56 by tollivan          #+#    #+#             */
/*   Updated: 2019/09/10 18:53:01 by tollivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	if (*dst)
	{
		while (src[i] != '\0' && i < len)
		{
			dst[i] = src[i];
			i++;
		}
		while (dst[i] != '\0' && i < len)
		{
			dst[i] = '\0';
			i++;
		}
		return (dst);
	}
	return (0);
}

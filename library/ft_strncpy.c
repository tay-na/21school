/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tollivan <tollivan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 14:15:56 by tollivan          #+#    #+#             */
/*   Updated: 2019/09/18 18:09:11 by tollivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (j < len)
	{
		if (src[i] != '\0')
		{
			dst[j] = src[i];
			i++;
		}
		else
			dst[j] = '\0';
		j++;
	}
	return (dst);
}

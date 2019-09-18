/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tollivan <tollivan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 18:35:06 by tollivan          #+#    #+#             */
/*   Updated: 2019/09/15 19:23:15 by tollivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)dst;
	i = 0;
	if (!dst & !src)
		return (0);
	while (i < n)
	{
		*p = ((const unsigned char *)src)[i];
		p++;
		if ((unsigned char)c == ((unsigned char *)src)[i])
			return (p);
		i++;
	}
	return (0);
}

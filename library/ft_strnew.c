/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tollivan <tollivan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 22:47:31 by tollivan          #+#    #+#             */
/*   Updated: 2019/09/20 16:38:05 by tollivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*dst;

	if (size + 1 < size)
		return (0);
	if (!(dst = ft_memalloc(size + 1)))
		return (0);
	while (*dst)
		ft_memset(dst, 0, size + 1);
	return (dst);
}

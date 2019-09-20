/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tollivan <tollivan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 19:44:05 by tollivan          #+#    #+#             */
/*   Updated: 2019/09/19 13:30:17 by tollivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	sum;
	char	*dst;

	if (!s1 || !s2)
		return (0);
	sum = ft_strlen(s1) + ft_strlen(s2);
	if (!(dst = (char *)malloc(sizeof(char) * sum + 1)))
		return (0);
	else
	{
		sum = 0;
		while (*s1)
			dst[sum++] = *s1++;
		while (*s2)
			dst[sum++] = *s2++;
		dst[sum] = '\0';
	}
	return (dst);
}

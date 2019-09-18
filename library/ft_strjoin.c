/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tollivan <tollivan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 19:44:05 by tollivan          #+#    #+#             */
/*   Updated: 2019/09/16 20:04:03 by tollivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	sum;
	char	*dst;

	sum = ft_strlen(s1) + ft_strlen(s2);
	dst = (char *)malloc(sizeof(char) * sum + 1);
	if (!dst)
		return (0);
	else
	{
		sum = 0;
		while (*s1)
		{
			dst[sum] = *s1;
			s1++;
			sum++;
		}
		while (*s2)
		{
			dst[sum] = *s2;
			s2++;
			sum++;
		}
		dst[sum] = '\0';
	}
	return (dst);
}

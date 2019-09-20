/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tollivan <tollivan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 18:58:26 by tollivan          #+#    #+#             */
/*   Updated: 2019/09/19 13:20:36 by tollivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	dst = (char *)malloc(sizeof(char) * len + 1);
	if (!dst)
		return (0);
	else
	{
		while (s[start] != '\0' && i < len)
		{
			dst[i] = s[start];
			i++;
			start++;
		}
		dst[i] = '\0';
		return (dst);
	}
}

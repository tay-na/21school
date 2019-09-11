/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tollivan <tollivan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:11:29 by tollivan          #+#    #+#             */
/*   Updated: 2019/09/11 15:16:35 by tollivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dst;
	int		i;

	if (*s)
	{
		dst = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
		if (dst)
		{
			i = 0;
			while (s[i] != '\0')
			{
				dst[i] = (*f)(i, s[i]);
				i++;
			}
			dst[i] = '\0';
		}
		return (dst);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tollivan <tollivan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 14:44:44 by tollivan          #+#    #+#             */
/*   Updated: 2019/09/11 15:11:14 by tollivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
				dst[i] = (*f)(s[i]);
				i++;
			}
			dst[i] = '\0';
		}
		return (dst);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tollivan <tollivan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 16:31:39 by tollivan          #+#    #+#             */
/*   Updated: 2019/09/09 22:06:58 by tollivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*tmp;
	int		len;

	len = 0;
	while (str[len])
		len++;
	tmp = (char *)malloc(sizeof(char) * len + 1);
	if (tmp)
	{
		len = 0;
		while (str[len] != '\0')
		{
			tmp[len] = str[len];
			len++;
		}
		tmp[len] = '\0';
		return (tmp);
	}
	return (NULL);
}

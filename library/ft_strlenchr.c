/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlenchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tollivan <tollivan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 16:26:19 by tollivan          #+#    #+#             */
/*   Updated: 2019/09/20 16:34:44 by tollivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlenchr(char *src, char c)
{
	size_t	count;

	count = 0;
	while (src[count] != 0 && src[count] != c)
		count++;
	return (count);
}

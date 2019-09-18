/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tollivan <tollivan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:11:30 by tollivan          #+#    #+#             */
/*   Updated: 2019/09/18 18:16:02 by tollivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(const char *str)
{
	if (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r' ||
		*str == '\t' || *str == '\v')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	unsigned long long int	res;
	int						i;
	int						sign;

	sign = 0;
	i = 0;
	res = 0;
	while (ft_isspace(&str[i]))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (res > 9223372036854775807 && sign == 0)
		return (-1);
	if (res > 9223372036854775807 && sign == -1)
		return (0);
	if (sign)
		return (-res);
	return (res);
}

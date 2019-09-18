/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tollivan <tollivan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 20:06:46 by tollivan          #+#    #+#             */
/*   Updated: 2019/09/18 18:28:31 by tollivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_push(char *s, int n)
{
	*s = n % 10 + '0';
	n = n / 10;
	return (n);
}

static void	ft_negative(int n, char *s, int len)
{
	int	i;

	i = len;
	if (n < 0 && n != -2147483648)
	{
		n = -n;
		while (--i > 0)
			n = ft_push(s + i, n);
	}
	else if (n == -2147483648)
	{
		n = -n - 1;
		while (--i > 0)
			n = ft_push(s + i, n);
		s[len - 1] += 1;
	}
	s[i] = '-';
}

char		*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*res;

	len = ft_numlen(n);
	if ((res = (char *)malloc(sizeof(char) * len + 1)))
	{
		i = len;
		res[i] = '\0';
		if (n >= 0)
			while (--i >= 0)
				n = ft_push(res + i, n);
		else
			ft_negative(n, res, len);
		return (res);
	}
	return (0);
}

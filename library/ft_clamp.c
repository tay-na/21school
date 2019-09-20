/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clamp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tollivan <tollivan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 16:03:29 by tollivan          #+#    #+#             */
/*   Updated: 2019/09/20 16:06:53 by tollivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_clamp(int a, int min, int max)
{
	if (a > min && a < max)
		return (a);
	else if (a < min)
		return (min);
	else
		return (max);
}

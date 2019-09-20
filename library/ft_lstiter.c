/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tollivan <tollivan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 19:34:07 by tollivan          #+#    #+#             */
/*   Updated: 2019/09/20 16:39:09 by tollivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = lst;
	if (tmp)
	{
		while (tmp)
		{
			tmp = lst->next;
			f(lst);
			lst = tmp;
		}
	}
}

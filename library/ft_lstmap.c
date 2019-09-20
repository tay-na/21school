/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tollivan <tollivan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 19:58:35 by tollivan          #+#    #+#             */
/*   Updated: 2019/09/19 21:00:12 by tollivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*prev;

	if (!lst)
		return (NULL);
	tmp = ft_lstnew(lst->content, lst->content_size);
	if (tmp)
	{
		tmp = f(lst);
		prev = tmp;
		while (lst->next)
		{
			prev->next = f(lst->next);
			prev = prev->next;
			lst = lst->next;
		}
		free(prev);
		return (tmp);
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tollivan <tollivan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 16:53:52 by tollivan          #+#    #+#             */
/*   Updated: 2019/09/19 18:43:21 by tollivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*tmpnxt;

	tmp = *alst;
	while (tmp)
	{
		tmpnxt = tmp->next;
		del(tmp->content, tmp->content_size);
		free(tmp);
		tmp = tmpnxt;
	}
	*alst = NULL;
}

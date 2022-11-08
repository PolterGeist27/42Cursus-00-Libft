/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:36:35 by diogmart          #+#    #+#             */
/*   Updated: 2022/11/08 12:47:41 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tmp;
	t_list	*new;

	head = ft_lstnew((*f)(lst->content));
	if (!head || !lst)
		return (NULL);
	tmp = lst->next;
	while (tmp != NULL)
	{
		new = ft_lstnew((*f)(tmp->content));
		if (!new)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, new);
		tmp = tmp->next;
	}
	return (head);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:36:35 by diogmart          #+#    #+#             */
/*   Updated: 2022/11/07 17:16:21 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	size_t	i;
	size_t	size;
	t_list	*new;

	i = 0;
	size = ft_lstsize(lst);
	new = (t_list *)malloc(size * sizeof(t_list));
	while (lst[i].next != NULL)
	{
		new[i].content = lst[i].content;
		// ...
	}
}

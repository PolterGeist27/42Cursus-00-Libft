/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:35:07 by diogmart          #+#    #+#             */
/*   Updated: 2022/11/07 17:09:00 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	size_t	i;

	i = 0;
	while(lst[i]->next != NULL)
	{
		del(lst[i]);
		free(lst[i]);
		i++;
	}
	*lst = NULL;
}

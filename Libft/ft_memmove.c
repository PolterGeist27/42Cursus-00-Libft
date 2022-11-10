/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:26:14 by diogmart          #+#    #+#             */
/*   Updated: 2022/11/10 11:49:36 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if(dest == src || !n)
		return (dest);
	i = 0;
	if (dest > src)
	{
		n--;
		while (n >= 0)
		{
			*((unsigned char *)dest + n) = *((unsigned char *)src + n);
			if (n == 0)
				break ;
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			*((unsigned char *)dest + i) = *((unsigned char *)src + i);
			i++;
		}
	}
	return (dest);
}

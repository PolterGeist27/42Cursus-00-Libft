/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:04:09 by diogmart          #+#    #+#             */
/*   Updated: 2022/11/07 15:07:00 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*ptr;

	i = 0;
	ptr = ((char *)s);
	while (*ptr != '\0' && i < n)
	{
		if (*ptr == c)
			return ((unsigned char *)ptr);
		ptr++;
		i++;
	}
	if (c == '\0')
		return ((unsigned char *)ptr);
	return (0);
}

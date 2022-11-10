/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:32:05 by diogmart          #+#    #+#             */
/*   Updated: 2022/11/10 12:02:05 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	start;
	size_t	len;
	size_t	total;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(len * sizeof(char));
	if (!str)
		return (NULL);
	start = ft_strlcpy(str, s1, ft_strlen(s1) + 1);
	total = ft_strlcpy((str + start), s2, ft_strlen(s2) + 1);
	total += start + 1;
	str[total] = '\0';
	return (str);
}

/*
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (!dst || !src)
		return (0);
	i = 0;
	while (i + 1 < size && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (size != 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}

int	main()
{
	char	*s1 = "Hello ";
	char	*s2 = "World!";

	printf("s1: %s	|	s2: %s\n
	Result: %s	|	Size: %d\n", s1, s2,
	 ft_strjoin(s1, s2), ft_strlen(ft_strjoin(s1, s2)));
}
*/
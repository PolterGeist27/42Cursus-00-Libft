/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:58:22 by diogmart          #+#    #+#             */
/*   Updated: 2022/11/07 16:45:14 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_contains(char const *set, char const c)
{
	size_t	i;

	i = 0;
	while (*(set + i) != '\0')
	{
		if (c == *(set + i))
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_totallen(char const *str, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	while (ft_contains(set, *(str + i)) && *(str + i) != '\0')
		i++;
	j = ft_strlen(str) - 1;
	while (ft_contains(set, *(str + j)) && j >= 0)
	{
		if (j == 0)
			return (0);
		j--;
	}
	len = (ft_strlen(str) - 1) - (i - 1) - (ft_strlen(str) - j - 1);
	return (len);
}

static size_t	ft_getidx(char const *s1, char const *set, int d)
{
	size_t	i;

	if (d > 0)
	{
		i = 0;
		while (ft_contains(set, *(s1 + i)) && *(s1 + i) != '\0')
			i++;
		return (i);
	}
	else
	{
		i = ft_strlen(s1);
		i--;
		while (ft_contains(set, *(s1 + i)) && i >= 0)
			i--;
		return (i);
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	h;
	size_t	len;
	char	*str;

	j = 0;
	len = ft_totallen(s1, set) + 1;
	str = (char *)malloc(len * sizeof(char));
	if (!str)
		return (NULL);
	if (len == 1)
	{
		str[0] = '\0';
		return (str);
	}
	i = ft_getidx(s1, set, 1);
	h = ft_getidx(s1, set, -1);
	while (j <= h - i)
	{
		str[j] = *(s1 + i + j);
		j++;
	}
	str[j + 1] = '\0';
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

int	main()
{
	char	*s1 = " \n \t ";
	char	*set = "\t \n";

	printf("%s\n", ft_strtrim(s1, set));

	printf("s1: %s	|	size: %d	|	set: %s\n \
	Result: %s	|	Size: %d\n", s1, ft_strlen(s1), set, \
	ft_strtrim(s1, set), ft_strlen(ft_strtrim(s1, set)));
}
*/
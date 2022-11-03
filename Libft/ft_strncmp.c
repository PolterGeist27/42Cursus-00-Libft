/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:31:52 by diogmart          #+#    #+#             */
/*   Updated: 2022/11/03 12:55:36 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[30] = "Hello World!";
	char	s2[30] = "Hello World!";
	size_t	n = 15;

	printf("User:\n	s1: %s	| s2: %s\n", s1, s2);
	printf("	Return Value: %d\n", ft_strncmp(s1, s2, n));

	printf("System:\n	s1: %s	| s2: %s\n", s1, s2);
	printf("	Return Value: %d\n", strncmp(s1, s2, n));
}
*/
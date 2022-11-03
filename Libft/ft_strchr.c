/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:42:38 by diogmart          #+#    #+#             */
/*   Updated: 2022/11/03 13:05:46 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*ptr;

	ptr = &s[0];
	while (*ptr != '\0')
	{
		if (*ptr == c)
			return ((unsigned char *)ptr);
		ptr++;
	}
	if (c == '\0')
		return ((unsigned char *)ptr);
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[25] = "Ola seu camelo!";
	char	c = 'c';

	// Function I created
	printf("User:\n		String: %s	| Char: %c\n", str, c);
	printf("		Pointer: %p | Value: %s\n", ft_strchr(str, c), ft_strchr(str, c));
	
	// Function from string.h library
	printf("System:\n		String: %s	| Char: %c\n", str, c);
	printf("		Pointer: %p | Value: %s\n", strchr(str, c), strchr(str, c));
	return (0);
}
*/
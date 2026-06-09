/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 15:55:23 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/05 14:16:55 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}

/*
Procura a primeira ocorrência de c na string s.
Retorna um ponteiro para o caractere encontrado ou NULL.
*/

/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	*str;
	char	*ptr;

	str = "Hello World";

	ptr = ft_strchr(str, 'W');
	printf("%s\n", ptr);

	ptr = ft_strchr(str, 'l');
	printf("%s\n", ptr);

	ptr = ft_strchr(str, 'x');
	printf("%p\n", (void *)ptr);

	return (0);
}
*/
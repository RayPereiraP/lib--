/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 11:58:24 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/05 14:10:57 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}

/*
Procura a primeira ocorrência de c nos primeiros n bytes de s.
Retorna um ponteiro para o byte encontrado ou NULL.
*/

/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	*ptr;
	char	str[] = "Hello";

	ptr = ft_memchr(str, 'e', 5);
	printf("%s\n", ptr);

	ptr = ft_memchr(str, 'x', 5);
	printf("%p\n", (void *)ptr);

	return (0);
}
*/
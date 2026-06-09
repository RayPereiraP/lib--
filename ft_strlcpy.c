/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 12:11:56 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/09 13:40:54 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	if (size == 0)
		return (j);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}

/*
Copia src para dst respeitando o tamanho do buffer.
Garante '\0' no final e retorna o tamanho de src.
*/

/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	dst[5];
	size_t	len;

	len = ft_strlcpy(dst, "Hello World", sizeof(dst));
	printf("dst: %s\n", dst);
	printf("len: %zu\n", len);
	return (0);
}
*/
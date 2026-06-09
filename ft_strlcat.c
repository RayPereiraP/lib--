/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 12:10:45 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/09 14:00:29 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dst >= size)
		return (size + len_src);
	while (len_dst + 1 < size && src[i])
	{
		dst[len_dst] = src[i];
		i++;
		len_dst++;
	}
	len_src -= i;
	dst[len_dst] = '\0';
	return (len_dst + len_src);
}

/*
Concatena src ao final de dst respeitando o tamanho do buffer.
Retorna o tamanho que a string teria tentado criar.
*/

/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	dst[20] = "Hello ";
	size_t	len;

	len = ft_strlcat(dst, "World", sizeof(dst));
	printf("dst: %s\n", dst);
	printf("len: %zu\n", len);
	return (0);
}
*/
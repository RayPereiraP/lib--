/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 11:59:32 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/09 12:58:11 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*pdest;
	unsigned char	*psrc;

	i = 0;
	if (!dest && !src)
		return (NULL);
	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (dest);
}

/*
Copia n bytes da memória src para dest.
Não deve ser usada quando as áreas de memória se sobrepõem.
*/

/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	src[] = "Hello";
	char	dest[10];

	ft_memcpy(dest, src, 6);

	printf("src : %s\n", src);
	printf("dest: %s\n", dest);

	return (0);
}
*/
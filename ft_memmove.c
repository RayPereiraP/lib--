/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:28:25 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/09 12:57:56 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;

	if (dest == src)
		return (dest);
	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	if (pdest > psrc)
	{
		while (n > 0)
		{
			n--;
			*(pdest + n) = *(psrc + n);
		}
	}
	else
	{
		while (n > 0)
		{
			*pdest++ = *psrc++;
			n--;
		}
	}
	return (dest);
}

/*
Copia n bytes de src para dest.
Funciona corretamente mesmo quando as áreas de memória se sobrepõem.
*/

/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	str[] = "abcdef";

	ft_memmove(str + 2, str, 4);

	printf("%s\n", str);

	return (0);
}
*/
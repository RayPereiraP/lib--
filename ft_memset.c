/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:28:25 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/09 12:39:40 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr++ = c;
		n--;
	}
	return (s);
}

/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	str[20] = "Hello World";

	ft_memset(str, '*', 5);

	printf("%s\n", str);

	return (0);
}
*/
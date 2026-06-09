/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayaryray14@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 16:00:44 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/03 19:53:40 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = 0;
	while (*s)
	{
		if (*s == (char)c)
			last = (char *)s;
		s++;
	}
	if (*s == (char)c)
		last = (char *)s;
	return (last);
}

/*
Procura a última ocorrência de c na string s.
Retorna um ponteiro para o caractere encontrado ou NULL.
*/

/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	*str;

	str = "banana";

	printf("%s\n", ft_strrchr(str, 'a'));
	printf("%s\n", ft_strrchr(str, 'n'));
	printf("%p\n", (void *)ft_strrchr(str, 'x'));

	return (0);
}
*/
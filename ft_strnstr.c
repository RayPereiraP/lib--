/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 12:14:30 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/09 12:48:53 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	if (little[0] == '\0')
		return ((char *)big);
	little_len = ft_strlen(little);
	i = 0;
	while (i + little_len <= len && big[i])
	{
		j = 0;
		while (i + j < len && big[i + j] == little[j])
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
/*
Procura a primeira ocorrência de needle em haystack,
considerando no máximo len caracteres.
*/

/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	*ptr;

	ptr = ft_strnstr("Hello World", "World", 11);
	printf("%s\n", ptr);

	ptr = ft_strnstr("Hello World", "abc", 11);
	printf("%p\n", (void *)ptr);

	return (0);
}
*/
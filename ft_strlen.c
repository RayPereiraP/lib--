/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayaryray14@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 14:33:10 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/03 15:54:11 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("%zu\n", ft_strlen("Hello"));
	printf("%zu\n", ft_strlen(""));
	printf("%zu\n", ft_strlen("42"));

	return (0);
}
*/

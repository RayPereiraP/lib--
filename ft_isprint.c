/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 14:26:14 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/09 12:53:10 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

/*
caracteres imprimiveis - inclui o espaço em branco
*/

/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("A: %d\n", ft_isprint('A'));
	printf("5: %d\n", ft_isprint('5'));
	printf("space: %d\n", ft_isprint(' '));
	printf("\\n: %d\n", ft_isprint('\n'));
	printf("127: %d\n", ft_isprint(127));

	return (0);
}*/

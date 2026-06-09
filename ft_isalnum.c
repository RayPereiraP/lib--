/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 13:31:38 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/09 13:00:49 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/*
outra forma de fazer quando as outras já estão criadas

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
*/

/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("a: %d\n", ft_isalnum('a'));
	printf("Z: %d\n", ft_isalnum('Z'));
	printf("5: %d\n", ft_isalnum('5'));
	printf("@: %d\n", ft_isalnum('@'));
	printf("space: %d\n", ft_isalnum(' '));

	return (0);
}
*/

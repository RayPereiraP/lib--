/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayaryray14@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 14:13:31 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/03 15:51:52 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
ASCII possui 128 caracteres
*/

/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("%d\n", ft_isascii(0));
	printf("%d\n", ft_isascii(65));
	printf("%d\n", ft_isascii(127));

	printf("%d\n", ft_isascii(128));
	printf("%d\n", ft_isascii(-1));
	printf("%d\n", ft_isascii(300));

	return (0);
}
*/
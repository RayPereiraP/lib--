/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayaryray14@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 15:48:02 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/03 19:41:53 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
Converte uma letra minúscula para maiúscula.
Se não for letra minúscula, retorna o caractere original.
*/

/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("%c\n", ft_toupper('a'));
	printf("%c\n", ft_toupper('z'));
	printf("%c\n", ft_toupper('m'));
	printf("%c\n", ft_toupper('A'));
	printf("%c\n", ft_toupper('1'));
	printf("%c\n", ft_toupper('@'));

	return (0);
}
*/
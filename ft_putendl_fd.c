/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayaryray14@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 12:03:06 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/07 19:59:30 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*
Envia uma string e quebra a linha no final.
*/

/*
#include "libft.h"

int	main(void)
{
	ft_putendl_fd("Hello", 1);
	ft_putendl_fd("World", 1);
	return (0);
}
*/
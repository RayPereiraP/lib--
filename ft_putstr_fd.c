/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayaryray14@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 12:04:16 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/04 19:22:32 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

/*
Envia todos os caracteres da string para o fd.
*/

/*
#include "libft.h"

int	main(void)
{
	ft_putstr_fd("Hello World", 1);
	ft_putchar_fd('\n', 1);
	return (0);
}
*/
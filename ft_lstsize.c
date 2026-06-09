/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 11:57:48 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/09 12:58:38 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*
Conta quantos nós existem na lista
*/

/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew("42");
	ft_lstadd_back(&lst, ft_lstnew("SP"));
	ft_lstadd_back(&lst, ft_lstnew("Libft"));

	printf("%d\n", ft_lstsize(lst));
	return (0);
}
*/
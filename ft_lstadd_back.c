/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 11:54:46 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/05 12:18:03 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*
Insere o nó new na última posição da lista.
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

	while (lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
	return (0);
}
*/
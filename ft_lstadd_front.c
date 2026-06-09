/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 11:54:53 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/09 12:56:58 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
 Adiciona um nó no início da lista.
*/

/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	t_list	*lst;
	t_list	*new;

	lst = ft_lstnew("42");
	new = ft_lstnew("Libft");

	ft_lstadd_front(&lst, new);

	printf("%s\n", (char *)lst->content);
	printf("%s\n", (char *)lst->next->content);

	return (0);
}*/

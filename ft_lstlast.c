/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 11:55:21 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/09 12:59:10 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
 Retorna o último nó da lista.
*/

/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	t_list	*lst;
	t_list	*last;

	lst = ft_lstnew("42");
	ft_lstadd_back(&lst, ft_lstnew("SP"));
	ft_lstadd_back(&lst, ft_lstnew("Libft"));

	last = ft_lstlast(lst);
	printf("%s\n", (char *)last->content);

	return (0);
}*/

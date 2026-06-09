/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 11:55:15 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/09 12:59:27 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
Percorre toda a lista executando uma função em cada conteúdo.
*/

/*
#include "libft.h"

void	print_str(void *content);

int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew("42");
	ft_lstadd_back(&lst, ft_lstnew("SP"));
	ft_lstadd_back(&lst, ft_lstnew("Libft"));

	ft_lstiter(lst, print_str);
	return (0);
}*/

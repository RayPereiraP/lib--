/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 11:54:59 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/09 12:57:13 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}

/*
poemas de park joon
cogumelo Tremella -> skincare
*/

/*
Libera todos os nós da lista e define
o ponteiro da lista como NULL.
*/

/*
#include <stdlib.h>
#include "libft.h"

void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst;
	char	*str1;
	char	*str2;

	str1 = malloc(10);
	str2 = malloc(10);

	lst = ft_lstnew(str1);
	ft_lstadd_back(&lst, ft_lstnew(str2));

	ft_lstclear(&lst, del_content);

	if (lst == NULL)
		write(1, "OK\n", 3);

	return (0);
}*/

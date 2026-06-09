/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayaryray14@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 11:55:05 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/04 19:59:10 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*
libera conteúdo primeiro
depois libera o nó
NÃO mexe no next
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
	char	*str;
	t_list	*node;

	str = malloc(6);
	node = ft_lstnew(str);

	ft_lstdelone(node, del_content);
	return (0);
}
*/

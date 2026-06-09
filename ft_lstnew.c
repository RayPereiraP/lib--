/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 11:57:19 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/09 12:58:52 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
Cria um novo nó da lista encadeada.
*/

/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	t_list	*node;

	node = ft_lstnew("Hello");
	if (!node)
		return (1);
	printf("%s\n", (char *)node->content);
	printf("%p\n", (void *)node->next);
	free(node);
	return (0);
}
*/
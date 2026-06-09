/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 12:07:05 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/09 12:55:23 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static char	*get_word(char const *s, size_t start, size_t end)
{
	char	*word;
	size_t	i;

	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static void	free_split(char **arr, size_t j)
{
	while (j > 0)
		free(arr[--j]);
	free(arr);
}

static int	fill_split(char **arr, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			arr[j] = get_word(s, start, i);
			if (!arr[j])
				return (free_split(arr, j), 0);
			j++;
		}
	}
	arr[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (NULL);
	arr = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!arr)
		return (NULL);
	if (!fill_split(arr, s, c))
		return (NULL);
	return (arr);
}

/*
Divide uma string usando o caractere c
como delimitador e retorna um array
de strings terminado por NULL.
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	char	**split;
	int		i;

	split = ft_split("42-SP-School", '-');
	if (!split)
		return (1);
	i = 0;
	while (split[i])
	{
		printf("split[%d] = %s\n", i, split[i]);
		free(split[i]);
		i++;
	}
	free(split);
	return (0);
}*/

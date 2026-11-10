/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:20:09 by amaghchi          #+#    #+#             */
/*   Updated: 2026/11/06 01:44:43 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static void	freedom(char **split, size_t i)
{
	while (i)
		free(split[--i]);
	free(split);
}

static size_t	fill(char **split, char const *s, char c, int *error)
{
	size_t	start;
	size_t	end;
	size_t	i;

	(1) && (start = 0, i = 0, *error = 0);
	while (s[start])
	{
		while (s[start] && s[start] == c)
			start++;
		if (!s[start])
			break ;
		end = start;
		while (s[end] && s[end] != c)
			end++;
		split[i] = ft_substr(s, start, (end - start));
		if (!split[i])
		{
			freedom(split, i);
			*error = 1;
			return (0);
		}
		(1) && (start = end, i++);
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**split;
	int		error;

	if (!s)
		return (NULL);
	split = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!split)
		return (NULL);
	i = fill(split, s, c, &error);
	if (error)
		return (NULL);
	split[i] = NULL;
	return (split);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:20:09 by amaghchi          #+#    #+#             */
/*   Updated: 2026/10/25 04:02:06 by amaghchi         ###   ########.fr       */
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

static void	freedom(char **split, int i)
{
	while (i)
	{
		free(split[--i]);
	}
	free(split);
	split = NULL;
}

static size_t	fill(char **split, char const *s, char c)
{
	size_t	start;
	size_t	end;
	size_t	len;
	size_t	i;

	(1) && (start = 0, i = 0);
	while (s[start])
	{
		while (s[start] && s[start] == c)
			start++;
		if (!s[start])
			break ;
		end = start;
		while (s[end] && s[end] != c)
			end++;
		len = end - start;
		split[i] = ft_substr(s, start, len);
		if (!split[i])
			freedom(split, i);
		start = end;
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**split;

	split = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!split)
		return (NULL);
	i = fill(split, s, c);
	split[i] = NULL;
	return (split);
}
// int	main(void)
// {
// 	char s[] = "salam 3alykom hello world ";
// 	char **split = ft_split(s, ' ');

// 	int i = 0;
// 	int j;

// 	while (split[i])
// 	{
// 		j = 0;
// 		while (split[i][j])
// 		{
// 			write(1, &split[i][j], 1);
// 			j++;
// 		}
// 		write(1, "\n", 1);
// 		i++;
// 	}
// 	return (0);
// }
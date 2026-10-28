/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 13:48:43 by amaghchi          #+#    #+#             */
/*   Updated: 2026/10/23 11:42:05 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wax_kayen(const char s1, const char *set)
{
	if (ft_strchr(set, s1) == 0)
		return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && wax_kayen(s1[start], set) == 1)
		start++;
	end = ft_strlen(s1);
	while (end > start && wax_kayen(s1[end - 1], set) == 1)
		end--;
	trim = malloc(sizeof(char) * ((end - start) + 1));
	if (!trim)
		return (NULL);
	i = 0;
	while (start < end)
		trim[i++] = s1[start++];
	trim[i] = '\0';
	return (trim);
}
// int	main(void)
// {
// 	char	str[] = "abc hello world bca";
// 	char	*p;

// 	p = ft_strtrim(str, "abc ");
// 	printf("%s\n", p);
// }

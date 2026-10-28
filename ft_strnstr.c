/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 19:50:34 by amaghchi          #+#    #+#             */
/*   Updated: 2026/10/16 11:14:48 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	if (!*little)
	{
		return ((char *)big);
	}
	i = 0;
	while (i < n && big[i])
	{
		j = 0;
		while (i + j < n && big[i + j] && big[i + j] == little[j])
		{
			j++;
		}
		if (!little[j])
		{
			return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}
// int main()
// {
//     char str[] = "hello world salam 3aykom ";
//     char lit[] = "salam";
//     char *p = ft_strnstr(str, lit, 20);
//     if (!p)
//     {
//         printf("NULL\n");
//     }
//     else
//     {
//         printf("%s\n" , p);
//     }
// }
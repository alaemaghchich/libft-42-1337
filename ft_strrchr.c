/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:55:42 by amaghchi          #+#    #+#             */
/*   Updated: 2026/10/25 07:48:29 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	if (!s)
	{
		return (0);
	}
	len = ft_strlen(s);
	while (1)
	{
		if (s[len] == (unsigned char)c)
			return ((char *)&s[len]);
		if (len == 0)
			break ;
		len--;
	}
	return (0);
}

// int main ()
// {
//     char str[] = "";
//     int c = 'h';
//     char *p = ft_strrchr(str, c);
//     if (!p)
//     {
//         printf("NULL");
//         return (0);
//     }
//         printf("%s\n", p);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 19:50:34 by amaghchi          #+#    #+#             */
/*   Updated: 2026/11/05 21:13:43 by amaghchi         ###   ########.fr       */
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

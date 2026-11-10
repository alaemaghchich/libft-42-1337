/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:55:42 by amaghchi          #+#    #+#             */
/*   Updated: 2026/11/05 21:08:47 by amaghchi         ###   ########.fr       */
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
		if (s[len] == (char)c)
			return ((char *)&s[len]);
		if (len == 0)
			break ;
		len--;
	}
	return (0);
}

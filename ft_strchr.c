/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 11:41:19 by amaghchi          #+#    #+#             */
/*   Updated: 2026/11/05 10:55:21 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (1)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		if (s[i] == '\0')
			break ;
		i++;
	}
	if (!c && !s[i])
		return ((char *)&s[i]);
	return (0);
}

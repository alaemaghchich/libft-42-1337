/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 18:25:11 by amaghchi          #+#    #+#             */
/*   Updated: 2026/11/05 07:16:19 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ss;
	unsigned char		cc;
	size_t				i;

	ss = s;
	cc = c;
	i = 0;
	while (i < n)
	{
		if (ss[i] == cc)
		{
			return ((void *)&ss[i]);
		}
		i++;
	}
	return (0);
}

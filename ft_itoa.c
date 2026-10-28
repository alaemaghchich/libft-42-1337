/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 23:31:16 by amaghchi          #+#    #+#             */
/*   Updated: 2026/10/28 13:20:33 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	size_t	len;
	char	*ascii;

	(1) && (nb = n, len = ft_intlen(n));
	ascii = malloc(sizeof(char) * (len + 1));
	if (!ascii)
		return (NULL);
	ascii[len--] = '\0';
	if (nb == 0)
	{
		ascii[len] = '0';
		return (ascii);
	}
	else if (nb < 0)
	{
		nb *= -1;
		ascii[0] = '-';
	}
	while (nb != 0)
	{
		ascii[len--] = (nb % 10) + 48;
		nb /= 10;
	}
	return (ascii);
}

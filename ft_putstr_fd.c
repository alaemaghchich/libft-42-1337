/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 11:30:17 by amaghchi          #+#    #+#             */
/*   Updated: 2026/10/18 01:58:18 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i++], 1);
	}
}
// int main()
// {
//     int fd = open("test.txt", O_CREAT | O_WRONLY | O_TRUNC, 0744);
//     ft_putstr_fd("hello si slam world", fd);
// }

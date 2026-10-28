/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 22:20:54 by amaghchi          #+#    #+#             */
/*   Updated: 2026/10/25 07:54:24 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*call;

	total = count * size;
	if (count != 0 && total / count != size)
		return (NULL);
	call = malloc(total);
	if (!call)
	{
		return (NULL);
	}
	ft_bzero(call, total);
	return (call);
}
// int main ()
// {
//     int  *p = ft_calloc(10 , sizeof(int));
//     int i = 0;
//     while (i < 10)
//     {
//         printf("%i ", p[i++]);
//     }
//     free(p);
//     p = NULL;
// }
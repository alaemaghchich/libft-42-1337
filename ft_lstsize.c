/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 13:12:04 by amaghchi          #+#    #+#             */
/*   Updated: 2026/10/26 20:41:44 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
// int	main(void)
// {
// 	int s1 = 1;
// 	int s2 = 2;
// 	int s3 = 3;
// 	int s4 = 4;
// 	t_list *p1 = ft_lstnew(&s1);
// 	t_list *p2 = ft_lstnew(&s2);
// 	t_list *p3 = ft_lstnew(&s3);
// 	t_list *p4 = ft_lstnew(&s4);

// 	t_list *head = p1;
// 	p1->next = p2;
// 	p2->next = p3;
// 	p3->next = p4;
// 	p4->next = NULL;

// 	ui size = ft_lstsize(head);
// 	printf("%d\n", size);
// }
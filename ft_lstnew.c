/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 20:12:57 by amaghchi          #+#    #+#             */
/*   Updated: 2026/10/25 05:42:04 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*p;

	p = malloc(sizeof(t_list));
	if (!p)
		return (NULL);
	p->content = content;
	p->next = NULL;
	return (p);
}
// int main ()
// {
// 	float s1 = 1.5;
// 	float s2 = 2.5;
// 	float s3 = 3.5;
// 	float s4 = 4.5;
// 	t_list *head = NULL;
// 	t_list *p1 = ft_lstnew(&s1);
// 	t_list *p2 = ft_lstnew(&s2);
// 	t_list *p3 = ft_lstnew(&s3);
// 	t_list *p4 = ft_lstnew(&s4);

// 	head = p1;
// 	p1->next = p2;
// 	p2->next = p3;
// 	p3->next = p4;
// 	p4->next = NULL;
// 	t_list *incrrement;
// 	incrrement = head;
// 	while (incrrement != NULL)
// 	{
// 		printf("%.2f\n" , *(float *)incrrement->content);
// 		incrrement = incrrement->next;
// 	}
// }

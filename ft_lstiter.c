/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 10:50:55 by amaghchi          #+#    #+#             */
/*   Updated: 2026/10/26 13:47:30 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmpo;

	if (!lst || !f)
		return ;
	tmpo = lst;
	while (tmpo)
	{
		f(tmpo->content);
		tmpo = tmpo->next;
	}
}
// void test(void * tst)
// {
// 		if(*(int *)tst % 2 == 0)
// 			printf("%d\n" , (*(int *)tst) * 10);
// }
// int main()
// {
// 	int s1 = 1;
//     int s2 = 2;
//     int s3 = 3;
//     int s4 = 4;
//     t_list *p1 = ft_lstnew(&s1);
//     t_list *p2 = ft_lstnew(&s2);
//     t_list *p3 = ft_lstnew(&s3);
//     t_list *p4 = ft_lstnew(&s4);

// 	t_list *head  = p1;
// 	p1->next = p2;
// 	p2->next = p3;
// 	p3->next = p4;
// 	p4->next = NULL;
// 	ft_lstiter(head, test);
// }
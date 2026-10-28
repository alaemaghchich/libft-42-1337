/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 04:48:17 by amaghchi          #+#    #+#             */
/*   Updated: 2026/10/26 10:12:24 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
}
// int main()
// {
//     int a1 = 1;
//     int a2 = 2;
//     int a3 = 3;
//     int anew = 1337;
//     t_list *p1 = ft_lstnew(&a1);
//     t_list *p2 = ft_lstnew(&a2);
//     t_list *p3 = ft_lstnew(&a3);
//     t_list *head = p1;
//     p1->next = p2;
//     p2->next = p3;
//     t_list *new = ft_lstnew(&anew);
//     ft_lstadd_back(&head, new);
//     while(head != NULL)
//     {
//         printf("%d\n", *(int *)head->content);
//         head = head->next;
//     }
// }
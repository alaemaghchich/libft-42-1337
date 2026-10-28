/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 20:07:24 by amaghchi          #+#    #+#             */
/*   Updated: 2026/10/26 13:56:26 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
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
// 	t_list *tempo  = head;
// 	p1->next = p2;
// 	p2->next = p3;
// 	p3->next = p4;
// 	p4->next = NULL;

// 	t_list *tst =  ft_lstlast(tempo);
// 	printf("%d\n", *(int *)tst->content);
// }
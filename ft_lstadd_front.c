/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 14:59:24 by amaghchi          #+#    #+#             */
/*   Updated: 2026/10/27 19:37:49 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
void help(void *p)
{
	(void)p;
}
// int main(int ac , char **av)
// {
// 	if (ac >= 2)
// 	{
// 		int i = 0;
// 		t_list *head = NULL;
// 		t_list *new;
// 		char *dup;
// 		while(i < ac)
// 		{
// 			dup = av[i];
// 			new = ft_lstnew(dup);
// 			ft_lstadd_front(&head, new);
// 			i++;
// 		}
// 		t_list *tempo = head;
// 		while(tempo)
// 		{
// 			printf("%s\n", (char *)tempo->content);
// 			tempo = tempo->next;
// 		}
// 		printf("========================================\n");
// 		tempo = head;
// 		t_list *last = ft_lstlast(tempo);
// 		ft_lstdelone(last, free);
// 		while (tempo)
// 		{
// 			printf("%s\n", (char *)tempo->content);
// 			if(tempo->next == last)
// 				tempo->next = NULL;
// 			tempo = tempo->next;
// 		}
			
// 		printf("========================================\n");

// 	}
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 10:25:58 by amaghchi          #+#    #+#             */
/*   Updated: 2026/10/27 10:27:32 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone((*lst), del);
		*lst = tmp;
	}
}

// int	main(int ac, char **av)
// {
// 	if (ac >= 2)
// 	{
// 		int i = 0;
// 		char *new = NULL;
// 		t_list *head = NULL;

// 		while (i < ac)
// 		{
// 			new = ft_strdup(av[i]);
// 			t_list *new_node = ft_lstnew(new);
// 			ft_lstadd_front(&head, new_node);

// 			i++;
// 		}
// 		t_list *tmpo = head;
// 		while (head)
// 		{
// 			printf("%s\n", (char *)head->content);

// 			head = head->next;
// 		}
// 		head = tmpo;
// 		printf("=====================================\n");
// 		ft_lstclear(&head, free);
// 		if (head == NULL)
// 		{
// 			printf("(NULL)");
// 			return (0);
// 		}
// 		while (head)
// 		{
// 			printf("%s\n", (char *)head->content);
// 			head = head->next;
// 		}
// 	}
// }
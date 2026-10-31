/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 11:47:48 by amaghchi          #+#    #+#             */
/*   Updated: 2026/10/28 13:48:42 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_head;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_head = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			ft_lstclear(&new_head, del);
			return (NULL);
		}
		ft_lstadd_back(&new_head, new_node);
		lst = lst->next;
	}
	return (new_head);
}
// void	*edit(void *content)
// {
// 	char	*str;
// 	int		i;

// 	if (!content)
// 		return (NULL);
// 	str = (char *)content;
// 	i = 0;
// 	while (str[i])
// 	{
// 		if (str[i] >= 'a' && str[i] <= 'z')
// 			str[i] -= 32;
// 		i++;
// 	}
// 	return (content);
// }
// int main (int ac , char **av)
// {
//     t_list *head = NULL;
//     char *content;
//     t_list *new;
//     int i = 0;
//     while (i < ac)
//     {
//         content = av[i];
//         new = ft_lstnew(content);
//         ft_lstadd_back(&head, new);
//         i++;
//     }
//     i = 0;
//     t_list *tmp  = head;
//     while(tmp)
//     {
//         printf("%s\n" , (char *)tmp->content);
//         tmp = tmp->next;
//     }
//     printf("==============================================\n");
//     t_list *p = ft_lstmap(head, edit, free);
//     while (p)
//     {
//         printf("%s\n", (char *)p->content);
//         p = p->next;
//     }
// }
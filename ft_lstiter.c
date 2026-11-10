/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 10:50:55 by amaghchi          #+#    #+#             */
/*   Updated: 2026/11/05 21:20:13 by amaghchi         ###   ########.fr       */
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

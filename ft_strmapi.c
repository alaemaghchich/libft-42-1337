/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghchi <amaghchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 20:26:24 by amaghchi          #+#    #+#             */
/*   Updated: 2026/10/23 11:34:10 by amaghchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*mapi;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	mapi = malloc(sizeof(char) * (len + 1));
	if (mapi == NULL)
	{
		return (mapi);
	}
	while (s[i])
	{
		mapi[i] = f(i, s[i]);
		i++;
	}
	mapi[i] = '\0';
	return (mapi);
}
// static char cypte(unsigned int i, char c)
// {
//     (void)i;
//     return ((c % 2 == 0) ? c = '*' : c);
// }
// static char	rm_spasece(unsigned int i, char c)
// {
// 	(void)i;
// 	return ((c == ' ') ? c = 127 : c);
// }
// int	main(void)
// {
// 	char str[] = "h e  ll  o w o r l d";
// 	char *p = ft_strmapi(str, rm_spasece);
// 	ft_putstr_fd(p, 1);
// }
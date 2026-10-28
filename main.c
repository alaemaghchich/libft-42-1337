#include "libft.h"

void del(void *content)
{
	free(content);
}

int	main(int ac, char **av)
{
	if (ac >= 2)
	{
		int i = 0;
		char *new = NULL;
		t_list *head = NULL;

		while (i < ac)
		{
			new = ft_strdup(av[i]);
			t_list *new_node = ft_lstnew(new);
			ft_lstadd_front(&head, new_node);

			i++;
		}
		t_list *tmpo = head;
		while (head) 
		{
			printf("%s\n", (char *)head->content);

			head = head->next;
		}
		head = tmpo;
		printf("=====================================\n");
		// t_list *last = ft_lstlast(tmpo);
		ft_lstclear(&head, del);
		if (head == NULL)
		{
			printf("(NULL)");
			return 0;
		}
		while (head)
		{
			printf("%s\n", (char *)head->content);
			head = head->next;
		}
	}
}
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int));

t_list	*add_int(t_list *list, int nb)
{
	t_list *new;

	new = (t_list*)malloc(sizeof(t_list));
	new->data = nb;
	new->next = list;
	return (new);
}

int		ascending(int a, int b)
{
		return (a <= b);
}

int	main(void)
{
	t_list *list;

	list = NULL;
	list = add_int(list, 9);
	list = add_int(list, 3);
	list = add_int(list, 2);
	list = add_int(list, 4);
	list = add_int(list, 1);
	list = sort_list(list, &ascending);

	while(list != NULL)
	{
		printf("%d\n", list->data);
		list = list->next;
	}
	
	return (0);
}

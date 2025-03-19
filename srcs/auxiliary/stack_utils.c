#include "push_swap.h"
#include <unistd.h>

t_stack	*last_node(t_stack *stack)
{
	if (stack == NULL)
		return (NULL);
	else
	{
		while (stack->next != NULL)
			stack = stack->next;
		return (stack);
	}
}


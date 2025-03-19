#include "push_swap.h"
void append_node(t_stack **stack, int n)
{
    t_stack *sign_node;
    t_stack *node_last;

    if(stack == NULL )
        return;
    node = ft_calloc(sizeof(t_stack));
    if(node==NULL)
        return;
    node->next=NULL;
    node->nbr=n;
    if(*stack == NULL)
    {
        *stack=node;
        node->prev = NULL;
    }
    else
    {
        node_last = last_node(*stack);
        node_last->next = node;
        node->prev = node_last;
    }
}

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# ifndef LONG_MAX
#  define LONG_MAX 9223372036854775807
# endif

# ifndef LONG_MIN
#  define LONG_MIN -9223372036854775807
# endif

typedef struct s_stack_node
{
	int					nbr;
	int					index;
	int					push_cost;
	int					above_median;
	int					cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}						t_stack;

t_stack					*last_node(t_stack *stack);

void	stack_setup_a(t_stack **a, char **av, int flag);
int	number_check(char *str);
void check_error(t_stack **a, char **args, int flag);
void    write_error(void);
int	stack_len(t_stack *stack);

void    sa(t_stack **a);
void    sb(t_stack **b);
void ss(t_stack **a, t_stack **b);
void    ra(t_stack **a);
void    rb(t_stack **b);
void    rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **b, t_stack **a);
void    setup_three(t_stack **a);
void    sort_stacks(t_stack **a, t_stack **b);
void	init_nodes_a(t_stack **a, t_stack **b);
void move_a_to_b(t_stack**a, t_stack **b);
void free_stack(t_stack **stack);
void	init_nodes_b(t_stack *a, t_stack *b);
#endif

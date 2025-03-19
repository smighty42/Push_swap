void	free_args(char **av)
{
	int i=0;

	if(av=='\0')
		return;
	while(av[i])
		{
			free(av[i]);
			i++;
		}
		free(av);
}
void free_stack(t_stack **stack)
{
	t_stack sign;
	t_stack tmp;
	if(stack == NULL)
		return;
	current = *stack;
	while(sign != NULL)
	{
		tmp=sign->next;
		free(sign);
		sign=tmp;
	}
	*stack=NULL;
}

void check_error(t_stack **a, char **args, int flag)
{
    if(flag)
        free_args(av);
    free_stack(a);
    write_error();
}   

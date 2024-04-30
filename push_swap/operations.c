#include "push_swap.h"

void	ft_ra(t_stack **a, int f) // shift up
{
	t_stack *tmp1;
	t_stack *tmp2;

	if (!(*a) || !(*a) -> next)
		return;
	tmp1 = *a;
	while ((*a) -> next ->next)
		(*a) = (*a) -> next;
	tmp2 = *a;
	*a = (*a) -> next;
	(*a) -> next = tmp1;
	tmp2 -> next = NULL;
	if (f == 1)
		write (1, "ra\n", 3);
	if (f == 2)
		write (1, "rb\n", 3);
}


void	ft_rr(t_stack **a, t_stack **b, int f)
{
	ft_ra(a, 3);
	ft_ra(b, 3);
	if (f == 3)
		write (1, "rr\n", 3);
}


void	ft_rra(t_stack **a, int f) //shift down
{
	t_stack *tmp1;
	t_stack *tmp2;

	if (!(*a) || !(*a) -> next)
		return;
	tmp1 = *a;
	*a = (*a) -> next;
	tmp2 = *a;
	while (tmp2 -> next)
		tmp2 = tmp2 -> next;
	tmp2 -> next = tmp1;
	tmp1 -> next = NULL;
	if (f == 1)
		write (1, "rra\n", 4);
	if (f == 2)
		write (1, "rrb\n", 4);
}

void	ft_rrr(t_stack **a, t_stack **b, int f)
{
	ft_rra(a, 3);
	ft_rra(b, 3);
	if (f == 3)
		write (1, "rrr\n", 4);
}


void	ft_sa(t_stack **a, int f)
{
	t_stack	*tmp;

	if (!(*a) || !(*a) -> next)
		return;
	tmp = *a;
	*a = (*a) -> next;
	tmp -> next = (*a) -> next;
	(*a) -> next = tmp;
	if (f == 1)
		write (1, "sa\n", 3);
	if (f == 2)
		write (1, "sb\n", 3);
}

void	ft_ss(t_stack **a, t_stack **b, int f)
{
	t_stack	*tmp;

	if (!(*a) || !(*a) -> next || !(*b) || !(*b) -> next)
		return;
	tmp = *a;
	*a = (*a) -> next;
	tmp -> next = (*a) -> next;
	(*a) -> next = tmp;
	tmp = *b;
	*b = (*b) -> next;
	tmp -> next = (*b) -> next;
	(*b) -> next = tmp;
	if (f == 3)
		write (1, "ss\n", 3);
}

void	ft_pa(t_stack **a, t_stack **b, int f)
{
	t_stack *tmp;

	if (!(*b))
		return;
	tmp = *b;
	*b = (*b) -> next;
	(*a) -> next = tmp;
	tmp -> next = NULL;
	if (f == 1)
		write (1, "pa\n", 3);
	if (f == 2)
		write (1, "pb\n", 3);
}

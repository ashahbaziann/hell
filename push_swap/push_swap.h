#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_stack
{
	long	num;
	struct s_stack *next;
	struct s_stack *prev;
}	t_stack;

void	ft_ra(t_stack **a, int f);
void	ft_rr(t_stack **a, t_stack **b, int f);
void	ft_rra(t_stack **a, int f);
void	ft_rrr(t_stack **a, t_stack **b, int f);
void	ft_sa(t_stack **a, int f);
void	ft_ss(t_stack **a, t_stack **b, int f);
void	ft_pa(t_stack **a, t_stack **b, int f);

#endif

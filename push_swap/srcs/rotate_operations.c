/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahbaz <ashahbaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:43:06 by ashahbaz          #+#    #+#             */
/*   Updated: 2024/05/15 17:35:27 by ashahbaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_stack **a, int f)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	if (!(*a) || !(*a)-> next)
		return ;
	tmp1 = *a;
	while ((*a)-> next-> next)
		(*a) = (*a)-> next;
	tmp2 = *a;
	*a = (*a)-> next;
	(*a)-> next = tmp1;
	tmp2 -> next = NULL;
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

void	ft_ra(t_stack **a, int f)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	if (!(*a) || !(*a)-> next)
		return ;
	tmp1 = *a;
	*a = (*a)-> next;
	tmp2 = *a;
	while (tmp2 -> next)
		tmp2 = tmp2 -> next;
	tmp2 -> next = tmp1;
	tmp1 -> next = NULL;
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

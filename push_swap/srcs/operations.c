/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahbaz <ashahbaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:32:19 by ashahbaz          #+#    #+#             */
/*   Updated: 2024/05/15 17:35:20 by ashahbaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stack **a, int f)
{
	t_stack	*tmp;

	if (!(*a) || !(*a)-> next)
		return ;
	tmp = *a;
	*a = (*a)-> next;
	tmp -> next = (*a)-> next;
	(*a)-> next = tmp;
	if (f == 1)
		write (1, "sa\n", 3);
	if (f == 2)
		write (1, "sb\n", 3);
}

void	ft_ss(t_stack **a, t_stack **b, int f)
{
	t_stack	*tmp;

	if (!(*a) || !(*a)-> next || !(*b) || !(*b)-> next)
		return ;
	tmp = *a;
	*a = (*a)-> next;
	tmp -> next = (*a)-> next;
	(*a)-> next = tmp;
	tmp = *b;
	*b = (*b)-> next;
	tmp -> next = (*b)-> next;
	(*b)-> next = tmp;
	if (f == 3)
		write (1, "ss\n", 3);
}

void	ft_pa(t_stack **a, t_stack **b, int f)
{
	t_stack	*tmp;

	if (!(*b))
		return ;
	if (!(*a))
	{
		*a = *b;
		*b = (*b)-> next;
		(*a)-> next = NULL;
	}
	else
	{
		tmp = *b;
		(*b) = (*b)-> next;
		tmp -> next = *a;
		*a = tmp;
	}
	if (f == 1)
		write (1, "pa\n", 3);
	if (f == 2)
		write (1, "pb\n", 3);
}

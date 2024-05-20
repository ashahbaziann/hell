/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahbaz <ashahbaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 20:29:28 by ashahbaz          #+#    #+#             */
/*   Updated: 2024/05/15 17:35:36 by ashahbaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_min_to_a(t_stack **a, t_stack **b, int index, int n)
{
	if (index <= n / 2)
	{
		while (index)
		{
			ft_ra(b, 1);
			index--;
		}
	}
	else if (index > n / 2)
	{
		while (index < n)
		{
			ft_rra(b, 1);
			index++;
		}
	}
	ft_pa(a, b, 2);
}

void	ft_sort_three(t_stack **a)
{
	t_stack	*max;

	max = ft_max(*a);
	if ((*a) == max)
		ft_ra(a, 1);
	else if ((*a)-> next == max)
		ft_rra(a, 1);
	if ((*a)-> num > (*a)-> next-> num)
		ft_sa(a, 1);
}

void	ft_sort_four(t_stack **a, t_stack **b)
{
	int	index;

	index = get_min_index(a);
	push_min_to_a(b, a, index, 4);
	ft_sort_three(a);
	ft_pa(a, b, 1);
}

void	ft_sort_five(t_stack **a, t_stack **b)
{
	int	index;
	int	n;

	n = 5;
	while (n > 3)
	{
		index = get_min_index(a);
		push_min_to_a(b, a, index, n);
		n--;
	}
	ft_sort_three(a);
	ft_pa(a, b, 1);
	ft_pa(a, b, 1);
}

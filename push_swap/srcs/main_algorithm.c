/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahbaz <ashahbaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 20:37:22 by ashahbaz          #+#    #+#             */
/*   Updated: 2024/05/15 17:35:11 by ashahbaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_max_to_a(t_stack **a, t_stack **b, int index, int n)
{
	if (index <= (n / 2))
	{
		while (index)
		{
			ft_ra(b, 2);
			index--;
		}
	}
	else if (index > n / 2)
	{
		while (index < n)
		{
			ft_rra(b, 2);
			index++;
		}
	}
	ft_pa(a, b, 1);
}

void	the_last_sorting(t_stack **a, t_stack **b, int n)
{
	int	index;

	while (n)
	{
		index = get_max_index(b);
		push_max_to_a(a, b, index, n);
		n--;
	}
}

void	ft_sort_main(t_stack **a, t_stack **b, int n, int *arr)
{
	int	i;
	int	j;

	i = 0;
	j = get_optimal_value(n);
	while ((*a) && i < n)
	{
		if ((*a)-> num <= arr[i])
		{
			ft_pa(b, a, 2);
			ft_ra(b, 2);
			i++;
		}
		else if ((*a)-> num <= arr[i] + j)
		{
			ft_pa(b, a, 2);
			i++;
		}
		else
			ft_ra(a, 1);
	}
	the_last_sorting(a, b, n);
}

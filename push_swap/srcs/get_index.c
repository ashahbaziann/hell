/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahbaz <ashahbaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 20:17:42 by ashahbaz          #+#    #+#             */
/*   Updated: 2024/05/15 17:35:02 by ashahbaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_index(t_stack **a)
{
	t_stack	*tmp;
	int		index;
	int		count;
	int		tmp_val;

	index = 0;
	count = 0;
	tmp = *a;
	if (!tmp)
	{
		return (0);
	}
	tmp_val = (*a)-> num;
	while (tmp)
	{
		if (tmp -> num > tmp_val)
		{
			tmp_val = tmp -> num;
			index = count;
		}
		tmp = tmp -> next;
		count++;
	}
	return (index);
}

int	get_min_index(t_stack **a)
{
	t_stack	*tmp;
	int		index;
	int		count;
	int		tmp_val;

	index = 0;
	count = 0;
	tmp = *a;
	if (!tmp)
	{
		return (0);
	}
	tmp_val = (*a)-> num;
	while (tmp)
	{
		if (tmp -> num < tmp_val)
		{
			tmp_val = tmp -> num;
			index = count;
		}
		tmp = tmp -> next;
		count++;
	}
	return (index);
}

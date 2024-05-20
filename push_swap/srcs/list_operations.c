/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahbaz <ashahbaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:42:18 by ashahbaz          #+#    #+#             */
/*   Updated: 2024/05/15 17:35:06 by ashahbaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lst_add(t_stack **a, t_stack *new)
{
	t_stack	*tmp;

	tmp = *a;
	if (!tmp)
	{
		*a = new;
		return ;
	}
	while (tmp -> next)
	{
		tmp = tmp -> next;
	}
	tmp -> next = new;
}

t_stack	*ft_new_node(int n)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new -> num = n;
	new -> next = NULL;
	return (new);
}

int	ft_lst_size(t_stack *a)
{
	t_stack	*tmp;
	int		count;

	tmp = a;
	count = 0;
	while (tmp)
	{
		tmp = tmp -> next;
		count++;
	}
	return (count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_related.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahbaz <ashahbaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:46:28 by ashahbaz          #+#    #+#             */
/*   Updated: 2024/05/15 17:35:15 by ashahbaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	str_len(char *str, int i)
{
	int	count;

	count = 0;
	while (str[i] == '0')
		i++;
	while (str[i])
	{
		count++;
		i++;
	}
	return (count);
}

t_stack	*ft_max(t_stack *a)
{
	t_stack	*max;
	t_stack	*tmp;

	max = a;
	tmp = a;
	while (tmp)
	{
		if (max -> num < tmp -> num)
			max = tmp;
		tmp = tmp ->next;
	}
	return (max);
}

int	ft_sqrt(int num)
{
	int	i;
	int	n;

	i = 1;
	n = num;
	if (n <= 0)
		return (0);
	if (n == 1)
		return (1);
	while (n - i > 1 && i <= 46340)
	{
		n = (n + i) / 2;
		i = num / n;
	}
	return (n);
}

int	ft_log(int n)
{
	int	i;

	i = 0;
	if (n <= 1)
		return (0);
	while (n > 1)
	{
		n = n / 2;
		i++;
	}
	return (i);
}

int	get_optimal_value(int n)
{
	return (ft_sqrt(n) + ft_log(n) + 1);
}

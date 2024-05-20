/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahbaz <ashahbaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 20:39:26 by ashahbaz          #+#    #+#             */
/*   Updated: 2024/05/16 19:50:20 by ashahbaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_sort_array(int *arr, int n)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	if (!arr)
		return (NULL);
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if (arr[i] < arr[j])
			{
				k = arr[j];
				arr[j] = arr[i];
				arr[i] = k;
			}
			j++;
		}
		i++;
	}
	return (arr);
}

int	*get_array_from_list(t_stack **a, int len)
{
	t_stack	*tmp;
	int		*array;
	int		i;

	i = 0;
	len = ft_lst_size(*a);
	tmp = *a;
	array = malloc(sizeof(int) * (len));
	if (!array)
	{
		ft_free(a);
	}
	while (tmp)
	{
		array[i] = tmp -> num;
		i++;
		tmp = tmp -> next;
	}
	return (array);
}

void	ft_sort(t_stack **a, t_stack **b)
{
	int	len;
	int	*array;

	len = ft_lst_size(*a);
	array = get_array_from_list(a, len);
	array = ft_sort_array(array, len);
	if (len == 2)
		ft_sa(a, 1);
	else if (len == 3)
		ft_sort_three(a);
	else if (len == 4)
		ft_sort_four(a, b);
	else if (len == 5)
		ft_sort_five(a, b);
	else
		ft_sort_main(a, b, len, array);
	free(array);
}

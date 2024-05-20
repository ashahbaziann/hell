/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahbaz <ashahbaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:56:56 by ashahbaz          #+#    #+#             */
/*   Updated: 2024/05/15 17:34:50 by ashahbaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stack(t_stack **a, char **argv, int argc)
{
	char	**str;
	int		i;
	int		j;
	long	num;

	i = 0;
	j = 1;
	while (j < argc)
	{
		i = 0;
		str = ft_split(argv[j], ' ');
		if (!str || !*str)
			ft_error();
		while (str[i])
		{
			num = ft_atoi(str[i]);
			ft_lst_add(a, ft_new_node(num));
			i++;
		}
		ft_free_split(str);
		j++;
	}
}

int	ft_dup_check(t_stack *a)
{
	t_stack	*tmp;

	while (a)
	{
		tmp = a -> next;
		while (tmp)
		{
			if (a -> num == tmp -> num)
				return (1);
			tmp = tmp -> next;
		}
		a = a -> next;
	}
	return (0);
}

int	ft_is_sorted(t_stack *a)
{
	int	n;

	if (!a)
		return (0);
	n = a -> num;
	while (a)
	{
		if (a -> num < n)
			return (0);
		n = a -> num;
		a = a -> next;
	}
	return (1);
}

void	ft_free(t_stack **a)
{
	t_stack	*tmp;

	if (!a)
		return ;
	while (*a)
	{
		tmp = (*a)-> next;
		free (*a);
		*a = tmp;
	}
}

void	ft_free_split(char **str)
{
	int	i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
	{
		free(str[i]);
		str[i] = NULL;
		i++;
	}
	free (str[i]);
	str[i] = NULL;
	free(str);
	str = NULL;
}

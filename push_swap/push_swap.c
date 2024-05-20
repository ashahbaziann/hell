/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahbaz <ashahbaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:22:58 by ashahbaz          #+#    #+#             */
/*   Updated: 2024/05/16 19:32:42 by ashahbaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc <= 1)
		return (0);
	fill_stack(&a, argv, argc);
	if (ft_dup_check(a))
	{
		ft_free(&a);
		ft_error();
	}
	if (!ft_is_sorted(a))
	{
		ft_sort(&a, &b);
	}
	ft_free(&a);
	ft_free(&b);
	// system("leaks push_swap");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahbaz <ashahbaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 18:36:06 by ashahbaz          #+#    #+#             */
/*   Updated: 2024/05/16 18:36:40 by ashahbaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		++i;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	is_valid_line(char *line)
{
	if (ft_strcmp(line, "sa\n") == 0)
		return (1);
	else if (ft_strcmp(line, "sb\n") == 0)
		return (1);
	else if (ft_strcmp(line, "ss\n") == 0)
		return (1);
	else if (ft_strcmp(line, "pa\n") == 0)
		return (1);
	else if (ft_strcmp(line, "pb\n") == 0)
		return (1);
	else if (ft_strcmp(line, "ra\n") == 0)
		return (1);
	else if (ft_strcmp(line, "rb\n") == 0)
		return (1);
	else if (ft_strcmp(line, "rr\n") == 0)
		return (1);
	else if (ft_strcmp(line, "rra\n") == 0)
		return (1);
	else if (ft_strcmp(line, "rrb\n") == 0)
		return (1);
	else if (ft_strcmp(line, "rrr\n") == 0)
		return (1);
	else
		return (0);
}

void	execute_valid_line(t_stack **a, t_stack **b, char *line)
{
	if (ft_strcmp(line, "sa\n") == 0)
		return (ft_sa(a, 5));
	else if (ft_strcmp(line, "sb\n") == 0)
		return (ft_sa(b, 5));
	else if (ft_strcmp(line, "ss\n") == 0)
		return (ft_ss(a, b, 5));
	else if (ft_strcmp(line, "pa\n") == 0)
		return (ft_pa(a, b, 5));
	else if (ft_strcmp(line, "pb\n") == 0)
		return (ft_pa(b, a, 5));
	else if (ft_strcmp(line, "ra\n") == 0)
		return (ft_ra(a, 5));
	else if (ft_strcmp(line, "rb\n") == 0)
		return (ft_ra(b, 5));
	else if (ft_strcmp(line, "rr\n") == 0)
		return (ft_rr(a, b, 5));
	else if (ft_strcmp(line, "rra\n") == 0)
		return (ft_rra(a, 5));
	else if (ft_strcmp(line, "rrb\n") == 0)
		return (ft_rra(b, 5));
	else if (ft_strcmp(line, "rrr\n") == 0)
		return (ft_rrr(a, b, 5));
}

void	get_input(char *line, t_stack **a, t_stack **b)
{
	while (1)
	{
		line = get_next_line(0);
		if (line == NULL)
			break ;
		if (is_valid_line(line) == 0)
		{
			free (line);
			get_next_line(-1);
			ft_error();
		}
		else
		{
			execute_valid_line(a, b, line);
		}
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	*line;

	a = NULL;
	b = NULL;
	line = NULL;
	if (argc <= 1)
		return (0);
	fill_stack(&a, argv, argc);
	if (ft_dup_check(a))
	{
		ft_error();
		ft_free(&a);
	}
	get_input(line, &a, &b);
	if (ft_is_sorted(a) && !b)
		write (1, "OK\n", 3);
	else
		write (1, "KO\n", 3);
	ft_free(&a);
	ft_free(&b);
}

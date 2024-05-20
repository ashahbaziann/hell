/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahbaz <ashahbaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:49:35 by ashahbaz          #+#    #+#             */
/*   Updated: 2024/05/16 18:27:46 by ashahbaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "get_next_line.h"

typedef struct s_stack
{
	long			num;
	struct s_stack	*next;
}	t_stack;

void	ft_ra(t_stack **a, int f);
void	ft_rr(t_stack **a, t_stack **b, int f);
void	ft_rra(t_stack **a, int f);
void	ft_rrr(t_stack **a, t_stack **b, int f);
void	ft_sa(t_stack **a, int f);
void	ft_ss(t_stack **a, t_stack **b, int f);
void	ft_pa(t_stack **a, t_stack **b, int f);

size_t	count_words(char const *s, char c);
char	*word_mall(char const *s, size_t f_occ, size_t l_occ);
char	**arr_mall(char const*s, char **split, char c);
char	**ft_split(char const *s, char c);

void	ft_error(void);
int		ft_is_digit(char c);
int		ft_is_whitespace(char c);
int		is_valid(char *str, int sign, int i);
int		ft_atoi(char *str);

t_stack	*ft_new_node(int n);
void	ft_lst_add(t_stack **a, t_stack *new);
int		ft_lst_size(t_stack *a);

int		str_len(char *str, int i);
t_stack	*ft_max(t_stack *a);
int		ft_sqrt(int num);
int		ft_log(int n);
int		get_optimal_value(int n);
int		get_max_index(t_stack **a);
int		get_min_index(t_stack **a);

void	fill_stack(t_stack **a, char **argv, int argc);
int		ft_dup_check(t_stack *a);
int		ft_is_sorted(t_stack *a);
void	ft_free(t_stack **a);
void	ft_free_split(char **str);

void	ft_sort_three(t_stack **a);
void	ft_sort_four(t_stack **a, t_stack **b);
void	ft_sort_five(t_stack **a, t_stack **b);
void	push_min_to_a(t_stack **a, t_stack **b, int index, int n);

void	push_max_to_a(t_stack **a, t_stack **b, int index, int n);
void	the_last_sorting(t_stack **a, t_stack **b, int n);
void	ft_sort_main(t_stack **a, t_stack **b, int n, int *arr);

int		*ft_sort_array(int *arr, int n);
int		*get_array_from_list(t_stack **a, int len);
void	ft_sort(t_stack **a, t_stack **b);

int		ft_strcmp(char *s1, char *s2);
int		is_valid_line(char *line);
void	execute_valid_line(t_stack **a, t_stack **b, char *line);
void	get_input(char *line, t_stack **a, t_stack **b);

#endif

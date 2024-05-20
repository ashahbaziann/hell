/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahbaz <ashahbaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:51:25 by ashahbaz          #+#    #+#             */
/*   Updated: 2024/05/16 19:20:43 by ashahbaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	write (2, "Error\n", 6);
	//system("leaks push_swap");
	exit (1);
}

int	ft_is_digit(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

int	ft_is_whitespace(char c)
{
	if ((c == ' ') || (c >= 9 && c <= 13) || (c == '\0'))
		return (1);
	return (0);
}

int	is_valid(char *str, int sign, int i)
{
	long	res;

	res = 0;
	if ((ft_is_whitespace(str[i])))
		ft_error();
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (!(ft_is_digit(str[i])))
			ft_error();
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (!(ft_is_whitespace(str[i])))
		ft_error();
	if (res * sign < -2147483648 || res * sign > 2147483647)
		ft_error();
	return (res * sign);
}

int	ft_atoi(char *str)
{
	int		i;
	int		sign;
	long	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	if (str_len(str, i) > 10)
		ft_error();
	res = is_valid(str, sign, i);
	return (res);
}

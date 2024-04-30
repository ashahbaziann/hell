#include "push_swap.h"

void	ft_error()
{
	write (2, "Error\n", 6);
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
	if ((c == ' ') || (c >= 9 && c <= 13))
		return (1);
	return (0);
}
int ft_atoi(char *str)
{
	int	i;
	int	sign;
	int res;

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
	if (!(ft_is_whitespace(str[i])) && !(ft_is_digit(str[i])))
		ft_error();
	while (str[i] >= '0' && str[i] <= '9')
		{
			res = res * 10 + str[i] - '0';
			i++;
			if (!(ft_is_whitespace(str[i])) || !ft_is_digit(str[i]))
				ft_error();
		}
	return (res * sign);
}

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
	tmp -> next  = new;
}


t_stack	*ft_new_node(int n)
{
	t_stack *new;

	new = malloc(sizeof(t_stack));
	if(!new)
		ft_error();
	new -> num = n;
	new -> next = NULL;
	return (new);
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
	if(!a)
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



int main(int argc, char **argv)
{
	t_stack	*a;
	int		num;
	int		i;

	i = 1;
	a = NULL;
	if (argc == 1)
		exit (0);
	while (i < argc)
	{
		num = ft_atoi(argv[i]);
		if (num <= -2147483648 || num >= 2147483647)
			ft_error();
		ft_lst_add(&a,ft_new_node(num));
		i++;
	}
	if (ft_dup_check(a))
	{
		ft_error();
		//ft_free();
	}
	printf("%d\n" ,ft_is_sorted(a));

}

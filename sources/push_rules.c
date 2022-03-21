/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_rules.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandeia <dcandeia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 14:36:58 by dcandeia          #+#    #+#             */
/*   Updated: 2022/02/24 17:36:21 by dcandeia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
> needs at least 1 digit;
> cannot hv strings, only digits; 
> the argumment cannot be bigger than 2147483647 and smaller than -2147483648;
> cannot hv duplicate numbers;
*/

#include "../Includes/push_swap.h"

int	checker_sinal(int argc, char **argv)
{
	int	i;
	int	j;
	int	h;

	i = 0;
	j = 0;
	while (i < argc)
	{
		h = 0;
		if (argv[j][h] == '-')
		{
			h++;
			if (!(argv[j][h] >= '0' && argv[j][h] >= '9'))
				return (-1);
		}
		j++;
		i++;
	}
	return (0);
}

int	check_digits(int argc, char **argv)
{
	int	i;
	int	a;

	i = 1;
	a = 0;
	while (i < argc)
	{
		a = 0;
		while (argv[i][a])
		{
			if ((argv[i][a] > 47 && argv[i][a] < 58) || argv[i][a] == '-')
				a++;
			else
				return (-1);
		}
		i++;
	}
	return (0);
}

int	check_int_max(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (ft_atoi(argv[i]) < -2147483648 || ft_atoi(argv[i]) > 2147483647)
			return (-1);
		i++;
	}
	return (0);
}

int	check_args_rules(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		return (-1);
	else if (check_digits(argc, argv) == -1)
		return (-1);
	else if (check_int_max(argc, argv) == -1)
		return (-1);
	else if (check_multi_numbers(argc, argv) == -1)
		return (-1);
	// else if (checker_sinal(argc, argv) == -1)
	// 	return (-1);
	return (0);
}

int	ft_push_rules(int argc, char **argv)
{
	if (check_args_rules(argc, argv) == -1)
	{
		write(2, "Error\n", 7);
		return (-1);
	}
	if (check_order(argc, argv) == -1)
		return (-1);
	return (0);
}

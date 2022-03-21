/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_multi_numbers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandeia <dcandeia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 15:30:47 by dcandeia          #+#    #+#             */
/*   Updated: 2022/02/10 16:36:47 by dcandeia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

int	check_multi_numbers(int argc, char **argv)
{
	int	i;
	int	a;
	int	*numbers;

	i = 0;
	a = 0;
	numbers = stack_numbers(argc, argv);
	while (i < (argc - 1))
	{
		a = i + 1;
		while (a < (argc - 1))
		{
			if (numbers[i] == numbers[a])
			{
				free(numbers);
				return (-1);
			}
			a++;
		}
		i++;
	}
	free(numbers);
	return (0);
}

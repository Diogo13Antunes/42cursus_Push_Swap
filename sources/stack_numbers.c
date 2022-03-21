/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandeia <dcandeia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:07:42 by dcandeia          #+#    #+#             */
/*   Updated: 2022/02/08 09:38:52 by dcandeia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

int	*stack_numbers(int argc, char **argv)
{
	int	i;
	int	a;
	int	*numbers;

	i = 1;
	a = 0;
	numbers = (int *)malloc((argc - 1) * sizeof(int));
	if (numbers == NULL)
		return (0);
	while (a < argc - 1)
		numbers[a++] = ft_atoi(argv[i++]);
	return (numbers);
}

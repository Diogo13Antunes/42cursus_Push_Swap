/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandeia <dcandeia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:23:38 by dcandeia          #+#    #+#             */
/*   Updated: 2022/02/10 18:40:15 by dcandeia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

int	*array_creator(t_list *stack, int tam)
{
	int	i;
	int	*array;

	i = 0;
	array = (int *)malloc(tam * sizeof(int));
	while (i < tam)
	{
		array[i] = stack->content;
		stack = stack->next;
		i++;
	}
	return (array);
}

int	*array_sort(t_list *stack, int tam)
{
	int	*array;
	int	temp;
	int	i;
	int	j;

	i = 0;
	j = 0;
	temp = 0;
	array = array_creator(stack, tam);
	while (i < tam)
	{
		j = 0;
		while (j < tam - 1)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	return (array);
}

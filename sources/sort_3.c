/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandeia <dcandeia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:32:47 by dcandeia          #+#    #+#             */
/*   Updated: 2022/02/08 10:57:04 by dcandeia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void	sep_1(t_list **stack_a, int valor_1, int valor_3)
{
	if (valor_1 > valor_3)
		move_rra(stack_a);
	else
	{
		move_sa(stack_a);
		move_ra(stack_a);
	}
}

void	sep_2(t_list **stack_a, int valor_2, int valor_3)
{
	if (valor_2 < valor_3)
		move_ra(stack_a);
	else
	{
		move_ra(stack_a);
		move_sa(stack_a);
	}
}

void	sort_3(t_list **stack_a)
{
	int	valor_1;
	int	valor_2;
	int	valor_3;

	valor_1 = (*stack_a)->content;
	valor_2 = (*stack_a)->next->content;
	valor_3 = (*stack_a)->next->next->content;
	if (valor_1 < valor_2)
	{
		sep_1(stack_a, valor_1, valor_3);
	}
	else if (valor_1 > valor_2 && valor_1 > valor_3)
	{
		sep_2(stack_a, valor_2, valor_3);
	}
	else
		move_sa(stack_a);
}

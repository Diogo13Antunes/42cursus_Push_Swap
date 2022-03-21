/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandeia <dcandeia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:16:02 by dcandeia          #+#    #+#             */
/*   Updated: 2022/02/03 14:08:45 by dcandeia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void	move_sa(t_list	**stack)
{
	t_list	*temp;

	temp = *stack;
	*stack = (*stack)->next;
	temp->next = (*stack)->next;
	(*stack)->next = temp;
	ft_printf("sa\n");
}

void	move_sb(t_list	**stack)
{
	t_list	*temp;

	temp = *stack;
	*stack = (*stack)->next;
	temp->next = (*stack)->next;
	(*stack)->next = temp;
	ft_printf("sb\n");
}

void	move_ss(t_list	**stack_a, t_list	**stack_b)
{
	t_list	*temp_a;
	t_list	*temp_b;

	temp_a = *stack_a;
	*stack_a = (*stack_a)->next;
	temp_a->next = (*stack_a)->next;
	(*stack_a)->next = temp_a;
	temp_b = *stack_b;
	*stack_b = (*stack_b)->next;
	temp_b->next = (*stack_b)->next;
	(*stack_b)->next = temp_b;
	ft_printf("ss\n");
}

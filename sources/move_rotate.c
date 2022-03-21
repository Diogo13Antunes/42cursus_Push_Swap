/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandeia <dcandeia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:07:25 by dcandeia          #+#    #+#             */
/*   Updated: 2022/02/14 17:42:08 by dcandeia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void	move_ra(t_list	**stack)
{
	t_list	*temp_1;
	t_list	*temp_2;

	temp_1 = *stack;
	while (temp_1->next != NULL)
	{
		temp_1 = temp_1->next;
	}
	temp_2 = *stack;
	*stack = (*stack)->next;
	temp_1->next = temp_2;
	temp_2->next = NULL;
	ft_printf("ra\n");
}

void	move_rb(t_list	**stack)
{
	t_list	*temp_1;
	t_list	*temp_2;

	temp_1 = *stack;
	while (temp_1->next != NULL)
	{
		temp_1 = temp_1->next;
	}
	temp_2 = *stack;
	*stack = (*stack)->next;
	temp_1->next = temp_2;
	temp_2->next = NULL;
	ft_printf("rb\n");
}

void	move_rr(t_list	**stack_a, t_list	**stack_b)
{
	t_list	*temp_a_1;
	t_list	*temp_a_2;
	t_list	*temp_b_1;
	t_list	*temp_b_2;

	temp_a_1 = *stack_a;
	while (temp_a_1->next != NULL)
	{
		temp_a_1 = temp_a_1->next;
	}
	temp_a_2 = *stack_a;
	*stack_a = (*stack_a)->next;
	temp_a_1->next = temp_a_2;
	temp_a_2->next = NULL;
	temp_b_1 = *stack_b;
	while (temp_b_1->next != NULL)
	{
		temp_b_1 = temp_b_1->next;
	}
	temp_b_2 = *stack_b;
	*stack_b = (*stack_b)->next;
	temp_b_1->next = temp_b_2;
	temp_b_2->next = NULL;
	ft_printf("rr\n");
}

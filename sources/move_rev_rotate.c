/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rev_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandeia <dcandeia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:21:52 by dcandeia          #+#    #+#             */
/*   Updated: 2022/02/14 17:42:13 by dcandeia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void	move_rra(t_list **stack)
{
	t_list	*temp;
	t_list	*new_end;

	temp = *stack;
	temp = ft_lstlast(temp);
	temp->next = *stack;
	new_end = *stack;
	while (new_end->next != temp)
		new_end = new_end->next;
	new_end->next = NULL;
	*stack = temp;
	ft_printf("rra\n");
}

void	move_rrb(t_list **stack)
{
	t_list	*temp;
	t_list	*new_end;

	temp = *stack;
	temp = ft_lstlast(temp);
	temp->next = *stack;
	new_end = *stack;
	while (new_end->next != temp)
		new_end = new_end->next;
	new_end->next = NULL;
	*stack = temp;
	ft_printf("rrb\n");
}

void	move_rrr(t_list	**stack_a, t_list	**stack_b)
{
	t_list	*temp;
	t_list	*new_end;

	temp = *stack_a;
	temp = ft_lstlast(temp);
	temp->next = *stack_a;
	new_end = *stack_a;
	while (new_end->next != temp)
		new_end = new_end->next;
	new_end->next = NULL;
	*stack_b = temp;
	temp = *stack_b;
	temp = ft_lstlast(temp);
	temp->next = *stack_b;
	new_end = *stack_b;
	while (new_end->next != temp)
		new_end = new_end->next;
	new_end->next = NULL;
	*stack_b = temp;
	ft_printf("rrr\n");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandeia <dcandeia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 12:36:05 by dcandeia          #+#    #+#             */
/*   Updated: 2022/02/09 12:09:02 by dcandeia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void	move_pa(t_list	**stack_a, t_list	**stack_b)
{
	t_list	*temp;

	if (*stack_b == NULL)
		return ;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	temp->next = *stack_a;
	*stack_a = temp;
	ft_printf("pa\n");
}

void	move_pb(t_list	**stack_a, t_list	**stack_b)
{
	t_list	*temp;

	if (*stack_a == NULL)
		return ;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next = *stack_b;
	*stack_b = temp;
	ft_printf("pb\n");
}
/*
void    push(t_list **src, t_list **dest, int option)
{
    t_list    *cursor_src;
    t_list    *cursor_dest;
    t_list    *temp;

    cursor_src = *src;
    if (!dest)
    {
        *dest = *src;
        cursor_dest = *dest;
        *src = cursor_src->next;
        cursor_dest->next = NULL;
    }
    else
    {
        cursor_dest = *dest;
        temp = cursor_src->next;
        cursor_src = *src;
        cursor_src->next = *dest;
        *src = temp;
        *dest = cursor_src;
    }
    if (option == 1)
        write(1, "pb\n", 3);
    if (option == 2)
        write(1, "pa\n", 3);
}*/

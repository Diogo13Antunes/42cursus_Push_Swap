/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_long_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandeia <dcandeia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:53:27 by dcandeia          #+#    #+#             */
/*   Updated: 2022/02/17 11:08:35 by dcandeia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

int	find_bigger(t_list **stack_b)
{
	int		counter;
	t_list	*temp;
	t_list	*bigger;

	counter = 0;
	temp = *stack_b;
	bigger = *stack_b;
	while (temp)
	{
		if (temp->content > bigger->content)
			bigger = temp;
		temp = temp->next;
	}
	temp = *stack_b;
	while (temp != bigger)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}

void	push_bigger(t_list **s_a, t_list **s_b, int c, int size)
{
	if (c > (size / 2))
	{
		c = size - c;
		while (c > 0)
		{
			c--;
			move_rrb(s_b);
		}
	}
	else
	{
		while (c > 0)
		{
			c--;
			move_rb(s_b);
		}
	}
	move_pa(s_a, s_b);
}

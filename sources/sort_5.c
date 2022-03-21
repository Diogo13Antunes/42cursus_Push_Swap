/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandeia <dcandeia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 11:02:00 by dcandeia          #+#    #+#             */
/*   Updated: 2022/02/16 12:03:09 by dcandeia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

int	small_nbr(t_list *stack)
{
	t_list	*temp;
	t_list	*min;
	int		c;

	temp = stack;
	min = stack;
	c = 0;
	while (temp)
	{
		if (min->content > temp->content)
			min = temp;
		temp = temp->next;
	}
	temp = stack;
	while (temp != min)
	{
		c++;
		temp = temp->next;
	}
	return (c);
}

void	ft_pb(t_list **stack_a, t_list **stack_b, int c, int n)
{
	if (c > 2)
	{
		if (n == 1)
			c = 5 - c;
		else
			c = 4 - c;
		while (c != 0)
		{
			move_rra(stack_a);
			c--;
		}
	}
	else
	{
		while (c != 0)
		{
			move_ra(stack_a);
			c--;
		}
	}
	move_pb(stack_a, stack_b);
}

int	check_sort(t_list **stack_a)
{
	int	valor_1;
	int	valor_2;
	int	valor_3;

	valor_1 = (*stack_a)->content;
	valor_2 = (*stack_a)->next->content;
	valor_3 = (*stack_a)->next->next->content;
	if (valor_1 < valor_2 && valor_2 < valor_3)
		return (1);
	else
		return (0);
}

void	sort_5(t_list **stack_a, t_list **stack_b, int n)
{
	t_list	*index;
	int		count;

	if (n == 5)
	{
		index = *stack_a;
		count = small_nbr(index);
		ft_pb(stack_a, stack_b, count, 1);
	}
	index = *stack_a;
	count = small_nbr(index);
	ft_pb(stack_a, stack_b, count, 2);
	if (check_sort(stack_a) == 0)
		sort_3(stack_a);
	while (*stack_b)
		move_pa(stack_a, stack_b);
}

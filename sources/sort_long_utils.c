/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_long_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandeia <dcandeia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:56:41 by dcandeia          #+#    #+#             */
/*   Updated: 2022/03/09 10:51:31 by dcandeia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

int	check_sort_b(t_list **stack_b)
{
	t_list	*temp;

	temp = *stack_b;
	while (temp->next)
	{
		if (temp->next->content > temp->content)
			return (1);
		temp = temp->next;
	}
	return (0);
}

int	check_size(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

void	check_numbr(t_list **s_a, t_list **s_b, t_chunk *cks, t_index i_ch)
{
	t_list		*temp;
	int			counter;
	int			check;

	counter = 0;
	check = 0;
	temp = *s_a;
	while (check == 0)
	{
		if (cks[i_ch.x_1].lim_min <= temp->content
			&& cks[i_ch.x_1].lim_max >= temp->content)
			check = push_b(s_a, s_b, counter, check_size(*s_a));
		else if (cks[i_ch.x_2].lim_min <= temp->content
			&& cks[i_ch.x_2].lim_max >= temp->content)
		{
			check = push_b(s_a, s_b, counter, check_size(*s_a));
			if ((*s_b)->next != NULL)
				move_rb(s_b);
		}
		else
			counter++;
		temp = temp->next;
	}
}

int	push_b(t_list **s_a, t_list **s_b, int c, int size)
{
	if (c > (size / 2))
	{
		c = size - c;
		while (c != 0)
		{
			c--;
			move_rra(s_a);
		}
	}
	else
	{
		while (c != 0)
		{
			c--;
			move_ra(s_a);
		}
	}
	move_pb(s_a, s_b);
	return (1);
}

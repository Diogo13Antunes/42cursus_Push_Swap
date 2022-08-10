/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_long.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandeia <dcandeia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:15:00 by dcandeia          #+#    #+#             */
/*   Updated: 2022/02/17 11:08:02 by dcandeia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void	is_checked(t_list **stack_a, t_list **stack_b, int size)
{
	int	i;
	int	is_checked;

	i = 0;
	is_checked = 0;
	is_checked = check_sort_b(stack_b);
	if (is_checked == 0)
	{
		while (i < size)
		{
			move_pa(stack_a, stack_b);
			i++;
		}
	}
	else
		push_finish(stack_a, stack_b, check_size(*stack_b));
}

void	push_to_b(int nb_ch, t_list **stack_a, t_list **stack_b, t_chunk *cks)
{
	int		i;
	int		ii;
	int		size_stk;
	t_index	indexs;
	int		counter;

	i = 0;
	counter = 0;
	while (i < (nb_ch / 2))
	{
		ii = 0;
		indexs.x_1 = nb_ch / 2 + i;
		indexs.x_2 = nb_ch / 2 - i - 1;
		size_stk = (cks[indexs.x_1].index_max - cks[indexs.x_1].index_min) + 1;
		size_stk += (cks[indexs.x_2].index_max - cks[indexs.x_2].index_min) + 1;
		while (ii < size_stk)
		{	
			check_numbr(stack_a, stack_b, cks, indexs);
			ii++;
		}
		i++;
	}
}

void	push_finish(t_list **s_a, t_list **s_b, int size)
{
	int	counter;

	counter = 0;
	while (size > 0)
	{
		counter = find_bigger(s_b);
		push_bigger(s_a, s_b, counter, size);
		size--;
	}
}

void	sort_long(t_list **stack_a, t_list **stack_b, int size)
{
	t_chunk	ch_list[50];
	int		n_chuncks;
	int		i;
	int		*arr;

	i = 0;
	n_chuncks = 0;
	arr = array_sort(*stack_a, size - 1);
	n_chuncks = choose_chunk(arr, size, ch_list);
	push_to_b(n_chuncks, stack_a, stack_b, ch_list);
	is_checked(stack_a, stack_b, size);
	free(arr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandeia <dcandeia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:30:59 by dcandeia          #+#    #+#             */
/*   Updated: 2022/02/24 16:00:01 by dcandeia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void	check_argc(int counter, t_list **s_a, t_list **s_b)
{
	if (counter == 3)
		move_rra(s_a);
	else if (counter == 4)
		sort_3(s_a);
	else if (counter == 5)
		sort_5(s_a, s_b, 4);
	else if (counter == 6)
		sort_5(s_a, s_b, 5);
	else if (counter > 6)
		sort_long(s_a, s_b, counter);
	else
		return ;
}

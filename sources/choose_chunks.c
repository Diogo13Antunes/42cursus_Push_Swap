/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_chunks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandeia <dcandeia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:40:27 by dcandeia          #+#    #+#             */
/*   Updated: 2022/02/24 15:53:09 by dcandeia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

int	chunks(int size)
{
	int	num_chuncks;

	num_chuncks = 0;
	if (size > 5 && size < 52)
		num_chuncks = 4;
	else if (size > 51 && size < 102)
		num_chuncks = 8;
	else if (size > 101 && size < 252)
		num_chuncks = 30;
	else if (size > 251 && size < 502)
		num_chuncks = 30;
	else if (size > 501)
		num_chuncks = 20;
	return (num_chuncks);
}

int	choose_chunk(int *array_sort, int size, t_chunk	*chunks_list)
{
	int	num_chuncks;
	int	i;
	int	div;

	i = 0;
	num_chuncks = chunks(size);
	div = size / num_chuncks;
	while (i < num_chuncks)
	{
		chunks_list[i].lim_min = array_sort[i * div];
		chunks_list[i].index_min = i * div;
		if (i == num_chuncks - 1)
		{
			chunks_list[i].lim_max = array_sort[size - 2];
			chunks_list[i].index_max = size - 2;
		}
		else
		{
			chunks_list[i].lim_max = array_sort[(i + 1) * div - 1];
			chunks_list[i].index_max = (i + 1) * div - 1;
		}
		i++;
	}
	return (num_chuncks);
}

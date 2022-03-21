/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandeia <dcandeia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:00:32 by dcandeia          #+#    #+#             */
/*   Updated: 2022/02/10 16:37:38 by dcandeia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

int	check_order(int argc, char **argv)
{
	int	i;
	int	*lista;

	i = 0;
	lista = stack_numbers(argc, argv);
	while (i < argc - 2)
	{
		if (lista[i] < lista[i + 1])
			i++;
		else
		{
			free(lista);
			return (0);
		}
	}
	free(lista);
	return (-1);
}

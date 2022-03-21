/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandeia <dcandeia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 09:39:56 by dcandeia          #+#    #+#             */
/*   Updated: 2022/02/24 15:56:17 by dcandeia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void	list_creator(int argc, char **argv, t_list **lista)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_lstadd_back(lista, ft_lstnew(ft_atoi(argv[i])));
		i++;
	}
}

void	push_swap(int argc, char **argv)
{
	t_list	*lista_a;
	t_list	*lista_b;

	if (ft_push_rules(argc, argv) == -1)
		return ;
	lista_a = NULL;
	lista_b = NULL;
	list_creator(argc, argv, &lista_a);
	check_argc(argc, &lista_a, &lista_b);
	ft_lstclear(&lista_a);
	ft_lstclear(&lista_b);
}

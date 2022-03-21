/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcandeia <dcandeia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:34:46 by dcandeia          #+#    #+#             */
/*   Updated: 2022/02/24 15:50:34 by dcandeia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//==============================================================================
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include "../Libft/libft.h"
# include "../ft_printf/ft_printf.h"
//==============================================================================
typedef struct s_chunck
{
	int				lim_min;
	int				lim_max;
	int				index_min;
	int				index_max;
}				t_chunk;

typedef struct s_index
{
	int				x_1;
	int				x_2;
}				t_index;

typedef struct s_count
{
	int				c_bigg;
	int				c_small;
	int				c_rra;
}				t_count;
//==============================================================================
void		push_swap(int argc, char **argv);
void		print_list(t_list *head);
//==============================================================================
long int	ft_atoi(const char *str);
int			check_args_rules(int argc, char **argv);
int			check_multi_numbers(int argc, char **argv);
int			*stack_numbers(int argc, char **argv);
int			check_order(int argc, char **argv);
int			ft_push_rules(int argc, char **argv);
int			checker_sinal(int argc, char **argv);
//==============================================================================
void		move_sa(t_list	**stack);
void		move_sb(t_list	**stack);
void		move_ss(t_list	**stack_a, t_list	**stack_b);
void		move_ra(t_list	**stack);
void		move_rb(t_list	**stack);
void		move_rr(t_list	**stack_a, t_list	**stack_b);
void		move_rra(t_list **stack);
void		move_rrb(t_list **stack);
void		move_rrr(t_list	**stack_a, t_list	**stack_b);
void		move_pa(t_list	**stack_a, t_list	**stack_b);
void		move_pb(t_list	**stack_a, t_list	**stack_b);
//==============================================================================
void		check_argc(int counter, t_list **s_a, t_list **s_b);
void		sort_3(t_list **stack_a);
void		sort_5(t_list **stack_a, t_list **stack_b, int n);
void		sort_long(t_list **stack_a, t_list **stack_b, int size);
//==============================================================================
int			check_size(t_list *lst);
void		check_numbr(t_list **s_a, t_list **s_b, t_chunk *cks, t_index i_ch);
int			push_b(t_list **s_a, t_list **s_b, int c, int size);
int			check_sort_b(t_list **stack_b);
int			*array_sort(t_list *stack, int tam);
int			choose_chunk(int *array_sort, int size, t_chunk	*chunks_list);
int			find_bigger(t_list **stack_b);
void		push_bigger(t_list **s_a, t_list **s_b, int c, int size);
void		push_finish(t_list **s_a, t_list **s_b, int size);
//==============================================================================

#endif
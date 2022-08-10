# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcandeia <dcandeia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/15 12:53:11 by dcandeia          #+#    #+#              #
#    Updated: 2022/02/24 16:00:52 by dcandeia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc
CFLAGS = -Wall -Werror -Wextra -g
RM = rm -f

# $(VERBOSE).SILENT:

HEADER = push_swap.h

LIBFT = ./Libft/libft.a
LIBFT_PATH = ./Libft

FT_PRINTF = ./ft_printf/libftprintf.a
FT_PRINTF_PATH = ./ft_printf

INC = -I ./Libft -I ./Includes -I ./ft_printf

SRC_PATH = ./sources

OBJ_PATH = ./objects

SRC_NAME = 	ft_atoi.c						\
			push_rules.c					\
			check_multi_numbers.c			\
			stack_numbers.c					\
			check_order.c					\
			move_swap.c						\
			move_rotate.c					\
			move_rev_rotate.c				\
			move_push.c						\
			check_argc.c					\
			sort_3.c						\
			sort_5.c						\
			sort_long.c						\
			sort_long_utils.c				\
			sort_long_utils2.c				\
			push_swap.c						\
			choose_chunks.c					\
			array_sort.c					\
			main.c

OBJS = $(addprefix $(OBJ_PATH)/, $(SRC_NAME:.c=.o))

SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME))

all: $(NAME)

$(NAME) : $(OBJS)
	make -C $(LIBFT_PATH)
	make -C $(FT_PRINTF_PATH)
	$(CC) $(CFLAGS) $(OBJS) $(INC) $(LIBFT) $(FT_PRINTF) -o $(NAME)
	echo "\x1b[36m[PUSH_SWAP COMPILED]\x1b[0m"

$(OBJ_PATH)/%.o : $(SRC_PATH)/%.c
	mkdir -p objects
	$(CC) -c $(CFLAGS) $(INCLUDES) $< -o $@

clean:
	make clean -C $(LIBFT_PATH)
	make clean -C $(FT_PRINTF_PATH)
	rm -rf $(OBJ_PATH)
	echo "\033[33mall $(NAME).o files are removed\033[0m"

fclean: clean
	make fclean -C $(LIBFT_PATH)
	make fclean -C $(FT_PRINTF_PATH)
	rm -f $(NAME)
	echo "\033[31m$(NAME) is deleted\033[0m"

re: fclean all

.PHONY: all, clean, fclean, re
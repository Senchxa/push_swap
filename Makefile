# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnoll <dnoll@studen.42.com>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/18 13:38:42 by dnoll             #+#    #+#              #
#    Updated: 2024/01/10 15:10:48 by dnoll            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = main.c ft_error_handler.c ft_input_to_stack.c print_utils.c \
	ft_atoi.c ft_split.c ft_node_handler.c help_funcs.c ft_check.c \
	ft_rules.c ft_sorting.c ft_index.c ft_radix_sort.c

OBJS = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	@rm -rf $(OBJS)

fclean :
	@rm -rf $(NAME)
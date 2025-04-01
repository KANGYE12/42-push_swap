# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kanye <kanye@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/30 16:44:01 by kanye             #+#    #+#              #
#    Updated: 2025/03/30 16:44:04 by kanye            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= push_swap

SRCS			= main.c push_swap.c utils.c check_args.c free_stacks.c tinysort.c utils02.c \
					posibilities_rotations_a_b.c cost_insertion_a_b.c apply_instructions_a_b.c \
					basic_insertion.c\
				
					
OBJS			= $(addprefix objPush_Swap/, $(SRCS:.c=.o))

LIBFT_DIR		= libft
LIBFT			= $(LIBFT_DIR)/libft.a

INSTRUCTIONS_DIR = Instructions
INSTRUCTIONS 	= $(INSTRUCTIONS_DIR)/instructions.a

CC				= gcc
CFLAGS			= -Wall -Wextra -Werror -I.

RM				= rm -f

all:			$(LIBFT) $(INSTRUCTIONS) $(NAME)

$(LIBFT):
				$(MAKE) -C $(LIBFT_DIR)

$(INSTRUCTIONS):
				$(MAKE) -C $(INSTRUCTIONS_DIR)

$(OBJS): objPush_Swap/%.o: %.c 
				@mkdir -p objPush_Swap
				$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(INSTRUCTIONS) $(LIBFT)

clean:
				$(RM) $(OBJS)
				@rm -rf objPush_Swap
				$(MAKE) clean -C $(LIBFT_DIR)
				$(MAKE) clean -C $(INSTRUCTIONS_DIR)

fclean:			clean
				$(RM) $(NAME)
				$(MAKE) fclean -C $(LIBFT_DIR)
				$(MAKE) fclean -C $(INSTRUCTIONS_DIR)

re:				fclean all

.PHONY: all clean fclean re




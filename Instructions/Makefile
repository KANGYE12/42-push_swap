# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kanye <kanye@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/25 17:04:02 by kanye             #+#    #+#              #
#    Updated: 2025/01/26 16:55:11 by kanye            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = sa.c sb.c ss.c pa.c pb.c ra.c rb.c rr.c rra.c rrb.c rrr.c 01swap.c 02push.c 03rotate.c 04reverse_rotate.c

OBJS = $(addprefix objInstructions/, $(SRCS:.c=.o))

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I. -I../libft 

LIBFT = ../libft/libft.a 

NAME = instructions.a

all: $(NAME)

$(OBJS): objInstructions/%.o: %.c
			@mkdir -p objInstructions
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
			ar rcs $(NAME) $(OBJS) $(LIBFT)

clean:
			$(RM) $(OBJS)
			@rm -rf objInstructions

fclean: clean
			$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

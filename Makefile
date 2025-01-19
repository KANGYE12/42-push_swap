# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kanye <kanye@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/18 16:30:56 by kanye             #+#    #+#              #
#    Updated: 2025/01/18 16:41:11 by kanye            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del ejecutable
NAME			= push_swap

# Fuentes y objetos
SRCS			= main.c push_swap.c utils.c
OBJS			= $(addprefix objPush_Swap/, $(SRCS:.c=.o))#Preffix to associate the .o files

# Directory and path of the file
LIBFT_DIR		= libft
LIBFT			= $(LIBFT_DIR)/libft.a

# Compilador y flags
CC				= gcc
CFLAGS			= -Wall -Wextra -Werror -I.

# Comandos
RM				= rm -f

# Reglas
all:			$(LIBFT) $(NAME)

$(LIBFT):
				$(MAKE) -C $(LIBFT_DIR)

$(OBJS): objPush_Swap/%.o: %.c 
				@mkdir -p objPush_Swap
				$(CC) $(CFLAGS) -c $< -o $@
				
$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT)

clean:
				$(RM) $(OBJS) @rm -rf objPush_Swap
				$(MAKE) clean -C $(LIBFT_DIR)

fclean:			clean
				$(RM) $(NAME)
				$(MAKE) fclean -C $(LIBFT_DIR)

re:				fclean all

.PHONY:			all clean fclean re


#Difference between $(SRCS:.c=.o) and obj/%.o: %.c  
#the first one associate a suffix and the second one generate the object file
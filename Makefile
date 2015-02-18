#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/10 11:39:32 by grass-kw          #+#    #+#              #
#    Updated: 2015/02/10 11:39:32 by grass-kw         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = gcc

NAME = pushswap

HEAD = ./libft

IFLAGS = -I . -I ./libft/includes

LIB = ./libft/libft.a

FLAGS = -Wall -Werror -Wextra -g

SRC = main.c algo.c operator.c operator2.c operator3.c tool.c tool2.c \
	tool3.c pushswap.c check.c parsing.c 

OBJ = $(SRC:.c=.o)

RM = rm -rf

all: libft $(NAME)

libft:
	make -C $(HEAD)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(LIB) -o $(NAME)

%.o: %.c
	$(CC) $(FLAGS) $(IFLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJ) $(NAME).dSYM


fclean: clean
	$(RM) $(NAME)
re: fclean all

gdb: $(OBJ)
	$(CC) $(OBJ) $(LIB) -o $(NAME)
	gdb $(NAME) -w

.PHONY: all libft clean fclean re gdb
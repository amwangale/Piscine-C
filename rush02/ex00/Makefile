# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcincean <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/17 18:09:41 by vcincean          #+#    #+#              #
#    Updated: 2016/09/18 12:49:55 by vcincean         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
FLAGS = -Wall -Wextra -Werror
SRC = colle.c colle_get_xy_dimension.c is_colle.c main.c \
	  other_functions.c read_stdin.c string_functions.c
OBJ = colle.o colle_get_xy_dimension.o is_colle.o main.o \
	  other_functions.o read_stdin.o string_functions.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC)
	gcc $(FLAGS) $(OBJ) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

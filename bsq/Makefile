# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saboanca <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/20 15:20:06 by saboanca          #+#    #+#              #
#    Updated: 2016/09/21 14:31:15 by vcincean         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
INCLUDES = includes/
SRC = src/main.c src/printer.c src/reader.c src/solver.c \
	   src/string_functions.c src/structures.c
OBJ = main.o printer.o reader.o solver.o string_functions.o structures.o
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC) -I $(INCLUDES)
	gcc $(FLAGS) $(OBJ) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

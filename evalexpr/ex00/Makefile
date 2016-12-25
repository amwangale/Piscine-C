# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcincean <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/17 11:19:13 by vcincean          #+#    #+#              #
#    Updated: 2016/09/17 14:20:55 by vcincean         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
FLAGS = -Wall -Wextra -Werror
SRC = main.c utils.c eval_expr.c
OBJ = main.o utils.o eval_expr.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC)
	gcc $(FLAGS) $(OBJ) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

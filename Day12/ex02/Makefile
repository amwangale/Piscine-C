# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcincean <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/14 12:03:19 by vcincean          #+#    #+#              #
#    Updated: 2016/09/14 14:12:15 by vcincean         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail
CLFAGS = -Wall -Wextra -Werror
SRC = main.c ft_tail.c utils.c
OBJ = main.o ft_tail.o utils.o

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRC)
	gcc $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re:	fclean all

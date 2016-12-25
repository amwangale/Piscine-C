# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcincean <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/14 12:03:19 by vcincean          #+#    #+#              #
#    Updated: 2016/09/14 12:42:27 by vcincean         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
CLFAGS = -Wall -Wextra -Werror
SRC = main.c ft_display_file.c utils.c
OBJ = main.o ft_display_file.o utils.o

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRC)
	gcc $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re:	fclean all

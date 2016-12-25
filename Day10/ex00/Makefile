# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcincean <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/12 12:36:00 by vcincean          #+#    #+#              #
#    Updated: 2016/09/12 17:06:54 by vcincean         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
	  srcs/ft_strlen.c srcs/ft_swap.c
INCLUDES = includes/

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRCS) -I $(INCLUDES)
	ar rc $(NAME) ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
	ranlib $(NAME)

clean:
	/bin/rm -f ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

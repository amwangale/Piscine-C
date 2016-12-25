/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 11:11:37 by exam              #+#    #+#             */
/*   Updated: 2016/09/22 11:44:59 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
** :(
*/

#include <unistd.h>
#include <stdlib.h>

int	is_separator(char c) {
	return (c == ' ' || c == '\t');
}

int	ft_wordlen(char *str) {
	int	l;

	while (is_separator(*str))
		str++;

	l = 0;
	while(!is_separator(*str++))
		l++;
	return l;
}

int	ft_strlen(char *str) {
	int	l;

	l = 0;
	while (*str++)
		l++;
	return l;
}

char *go_to_next_word_end(char *str) {
	while (is_separator(*str))
		str++;
	while (!is_separator(*str))
		str++;
	return str;
}

char *go_to_next_word_start(char *str) {
	while (!is_separator(*str))
		str++;
	while (is_separator(*str))
		str++;
	return str;
}

void	print_next_word_and_a_space(char *str) {
	if (*str == '\0')
		return;

	while (!is_separator(*str)) {
		write(1, str, 1);
		str++;
	}
	write(1, " ", 1);
}

void solve(char *str) {
	char *first_word;
	int	i;

	first_word = (char*)malloc(sizeof(char) * (ft_wordlen(str) + 1));
	while (is_separator(*str))
		str++;
	
	i = 0;
	while (!is_separator(*str))
		first_word[i++] = *str++;
	first_word[i] = '\0';

//	while ((str = print_next_word_and_go_to_next(str)) != 0);

	while (*str) {
		str = go_to_next_word_start(str);
		print_next_word_and_a_space(str);
	}


//	while (*str != '0') {
//		str = print_next_word_and_go_to_next(str);
//	}

	write(1, first_word, ft_strlen(first_word));
	write(1, "\n", 1);
}

int	main(int argc, char **argv) {
	int	i;

	if (argc <= 1)
		write(1, "\n", 1);
	else {
		i = 1;
		while (i < argc)
			solve(argv[i++]);
	}
	return 0;
}

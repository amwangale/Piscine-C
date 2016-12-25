/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 14:52:39 by exam              #+#    #+#             */
/*   Updated: 2016/09/15 15:32:42 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int is_separator(char c) {
	if (c == ' ' || c == '\t')
		return 1;
	return 0;
}

int size_of_first_word(char *str) {
	int s;

	s = 0;
	while (*str && is_separator(*str))
		str++;
	while (*str && !is_separator(*str)) {
		s++;
		str++;
	}
	return s;
}

void ft_strncpy(char *dest, char *src, int n) {
	while (n--) {
		*dest = *src;
		dest++;
		src++;
	}
}

char *get_first_word(char *str) {
	char *ret;

	while (*str && is_separator(*str))
		str++;
	ret = (char*)malloc(sizeof(char) * (size_of_first_word(str) + 1));
	ft_strncpy(ret, str, size_of_first_word(str));
	ret[size_of_first_word(str)] = '\0';
	return ret;
}

char *get_next_word_end(char *str) {
	while (*str && is_separator(*str))
		str++;
	while (*str && !is_separator(*str))
		str++;
	return str;
}

int ft_strlen(char *str) {
	int l;

	l = 0;
	while (*str++)
		l++;
	return l;
}

void ft_putstr(char *str) {
	write(1, str, ft_strlen(str));
}

int is_near_end_of_string(char *str) {
	while (*str && is_separator(*str))
		str++;
	if (*str == '\0')
		return 1;
	return 0;
}

void rostring(char *str) {
	char *first_word = get_first_word(str);
	char *word;

	str = get_next_word_end(str);
	while (!is_near_end_of_string(str)) {
		word = get_first_word(str);
		write(1, word, ft_strlen(word));
		write(1, " ", 1);
		free (word);
		str = get_next_word_end(str);
	}
	write(1, first_word, ft_strlen(first_word));
	write(1, "\n", 1);
	free(first_word);
}

int main(int argc, char **argv) {
	if (argc == 1) {
		write(1, "\n", 1);
		return 0;
	}
	rostring(argv[1]);
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 10:54:47 by exam              #+#    #+#             */
/*   Updated: 2016/09/22 11:09:24 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_lower(char c) {
	return ('a' <= c && c <= 'z');
}

int	is_upper(char c) {
	return ('A' <= c && c <= 'Z');
}

int	is_alpha(char c) {
	return (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'));
}

void lower_to_upper(char *c) {
	*c = *c - 'a' + 'A';
}

void upper_to_lower(char *c) {
	*c = *c - 'A' + 'a';
}

int	ft_strlen(char *str) {
	int l;

	l = 0;
	while (*str++)
		l++;
	return l;
}

void solve(char *str) {
	int	i;

	if (is_lower(str[0]))
		lower_to_upper(str);
	i = 1;
	if (str[0]) {
		while (str[i]) {
			if (str[i - 1] == ' ' || str[i - 1] == '\t') {
				if (is_lower(str[i]))
					lower_to_upper(str + i);
			}
			else {
				if (is_upper(str[i]))
					upper_to_lower(str + i);
			}
			i++;
		}
	}

	write(1, str, ft_strlen(str));
	write(1, "\n", 1);
}

int	main(int argc, char **argv) {
	int	i;

	i = 1;
	while (i < argc)
		solve(argv[i++]);

	if (argc == 1)
		write(1, "\n", 1);
	return 0;
}

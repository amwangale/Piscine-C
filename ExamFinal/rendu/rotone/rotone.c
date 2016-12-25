/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 10:05:21 by exam              #+#    #+#             */
/*   Updated: 2016/09/22 10:17:35 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_upper(char c) {
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int	is_lower(char c) {
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

int	is_letter(char c) {
	if ('a' <= c && c <= 'z')
		return (1);
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int	ft_strlen(char *str) {
	int	l;

	l = 0;
	while (*str++)
		l++;
	return (l);
}

void solve(char *str) {
	int	i;

	i = 0;
	while (str[i]) {
		if (!is_letter(str[i]));
		else if (is_lower(str[i]))
			str[i] = (str[i] - 'a' + 1) % ('z' - 'a' + 1) + 'a';
		else if (is_upper(str[i]))
			str[i] = (str[i] - 'A' + 1) % ('Z' - 'A' + 1) + 'A';
		i++;
	}
	write(1, str, ft_strlen(str));
}

int	main(int argc, char **argv) {
	if (argc == 2)
		solve(argv[1]);
	write(1, "\n", 1);
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 14:18:43 by exam              #+#    #+#             */
/*   Updated: 2016/09/22 14:46:51 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_alpha(char c) {
	return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'));
}

int	is_lower(char c) {
	return ('a' <= c && c <= 'z');
}

int	is_upper(char c) {
	return ('A' <= c && c <= 'Z');
}

void solve(char *str) {

	int	vf[26];
	int	afisat[26];
	int	i;

	for (i = 0; i < 26; i++) {
		vf[i] = 0;
		afisat[i] = 0;
	}

	for (i = 0; str[i]; i++) {
		if (is_alpha(str[i])) {
			if (is_lower(str[i]))
				vf[(int)(str[i] - 'a')]++;
			else if (is_upper(str[i]))
				vf[(int)(str[i] - 'A')]++;
		}
	}

	i = 0;
	while (str[i] && !is_alpha(str[i]))
		i++;
	if (is_lower(str[i])) {
		printf("%d%c", vf[(int)(str[i] - 'a')], (char)(str[i]));
		afisat[(int)(str[i] - 'a')] = 1;
	}
	else if (is_upper(str[i])) {
		printf("%d%c", vf[(int)(str[i] - 'A')], (char)(str[i] - 'A' + 'a'));
		afisat[(int)(str[i] - 'A')] = 1;
	}

	while (str[i]) {
		if (is_lower(str[i]) && afisat[(int)(str[i] - 'a')] == 0) {
			printf(", %d%c", vf[(int)(str[i] - 'a')], (char)(str[i]));
			afisat[(int)(str[i] - 'a')] = 1;
		}
		if (is_upper(str[i]) && afisat[(int)(str[i] - 'A')] == 0) {
			printf(", %d%c", vf[(int)(str[i] - 'A')], (char)(str[i] - 'A' + 'a'));
			afisat[(int)(str[i] - 'A')] = 1;
		}
		i++;
	}

	printf("\n");
}

int	main(int argc, char **argv) {
	if (argc != 2)
		printf("\n");
	else
		solve(argv[1]);	

	return 0;
}

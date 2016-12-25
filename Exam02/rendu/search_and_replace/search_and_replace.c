/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 14:04:39 by exam              #+#    #+#             */
/*   Updated: 2016/09/15 14:13:32 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str) {
	int len;

	len = 0;
	while (*str++)
		len++;
	return len;
}

int main(int argc, char **argv) {
	int i;

	if (argc != 4) {
		write(1, "\n", 1);
		return 0;
	}
	
	if (argv[2][1] != '\0' || argv[3][1] != '\0') {
		write(1, "\n", 1);
		return 0;
	}

	i = 0;
	while (argv[1][i] != '\0') {
		if (argv[1][i] == argv[2][0])
			argv[1][i] = argv[3][0];
		i++;
	}
	write(1, argv[1], ft_strlen(argv[1]));
	write(1, "\n", 1);
	return 0;
}

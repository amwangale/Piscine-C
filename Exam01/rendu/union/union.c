/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 14:27:39 by exam              #+#    #+#             */
/*   Updated: 2016/09/08 14:45:43 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	do_solve(char *str1, char *str2) {
	int	used[128];
	int i;

	i = 0;
	while (i < 128)
		used[i++] = 0;

	i = 0;
	while (str1[i]) {
		if (!used[(int)str1[i]]) {
			write(1, &str1[i], 1);
			used[(int)str1[i]] = 1;
		}
		i++;
	}

	i = 0;
	while (str2[i]) {
		if (!used[(int)str2[i]]) {
			write(1, &str2[i], 1);
			used[(int)str2[i]] = 1;
		}
		i++;
	}

	write(1, "\n", 1);
}

int		main(int argc, char **argv) {
	if (argc != 3)
		write(1, "\n", 1);
	else
		do_solve(argv[1], argv[2]);
	return (0);
}

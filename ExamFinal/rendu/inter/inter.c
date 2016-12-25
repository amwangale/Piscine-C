/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 10:18:54 by exam              #+#    #+#             */
/*   Updated: 2016/09/22 10:29:14 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void solve(char *str1, char *str2) {
	int vf[128];
	int	i;

	i = 0;
	while (i < 128)
		vf[i++] = 0;

	i = 0;
	while (str2[i]) {
		if (vf[(int)str2[i]] == 0)
			vf[(int)str2[i]] = 1;
		i++;
	}

	i = 0;
	while (str1[i]) {
		if (vf[(int)str1[i]] == 1) {
			vf[(int)str1[i]] = 2;
			write(1, str1 + i, 1);
		}
		i++;
	}
}

int	main(int argc, char **argv) {
	if (argc == 3)
		solve(argv[1], argv[2]);
	write(1, "\n", 1);
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 14:18:58 by exam              #+#    #+#             */
/*   Updated: 2016/09/08 14:25:32 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str) {
	int l;

	l = 0;
	while (*str++)
		l++;
	return (l);
}

void	do_solve(char *str) {
	int	len;

	len = ft_strlen(str) - 1;
	while (len >= 0) {
		write(1, &str[len], 1);
		len--;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv) {
	if (argc != 2)
		write(1, "\n", 1);
	else
		do_solve(argv[1]);
	return (0);
}

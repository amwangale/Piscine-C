/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 14:47:55 by exam              #+#    #+#             */
/*   Updated: 2016/09/08 15:09:06 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str) {
	int ret;
	int sign;

	while (*str && (*str == ' ' || *str == '\t' || *str == '\n'))
		str++;

	sign = 1;
	if (*str == '+')
		str++;
	else if (*str == '-') { //parametrul e pozitiv, dar totusi.. sa fie complet
		sign = -1;
		str++;
	}

	ret = 0;
	while (*str && '0' <= *str && *str <= '9') {
		ret = ret * 10 + *str - '0';
		str++;
	}
	return ret;
}

void	ft_put_positive_number(int n) {
	char c;

	if (n < 10) {
		c = n + '0';
		write(1, &c, 1);
	}
	else {
		ft_put_positive_number(n / 10);
		ft_put_positive_number(n % 10);
	}
}

void	do_solve(char *str) {
	int n = ft_atoi(str);
	int i = 1;

	while (i < 10) {
		ft_put_positive_number(i);
		write(1, " x ", 3);
		ft_put_positive_number(n);
		write(1, " = ", 3);
		ft_put_positive_number(i * n);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv) {
	if (argc != 2)
		write(1, "\n", 1);
	else
		do_solve(argv[1]);
	return 0;
}

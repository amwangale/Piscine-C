/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 15:43:14 by exam              #+#    #+#             */
/*   Updated: 2016/09/15 15:53:07 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// sorry :(


char g_digits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
	'A', 'B', 'C', 'D', 'E', 'F'};

long long power(int nb, int power) {
	long long ret;

	ret = 1;
	while (power--)
		ret = 1LL * ret * nb;
	return ret;
}

int get_size(int value, int base) {
	int size;
	int neg;
	long long val;

	neg = 0;
	size = 1;
	val = (long long)value;
	if (val < 0) {
		val *= -1;
		neg = 1;
	}
	while (val / power(base, size))
		size++;
	return size;
}

char *ft_itoa_base(int value, int base) {
	char *ret = (char*)malloc(sizeof(char) * (get_size(value, base) + 3));
	long long val;
	int i;

	i = 0;
	val = (long long)value;
	if (val < 0) {
		val *= -1;
		ret[0] = '-';
		ret++;
	}
	//while (val) {
	//	/* ... */
	//}
	return ret;;
}

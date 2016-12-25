/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 12:21:47 by exam              #+#    #+#             */
/*   Updated: 2016/09/22 12:30:39 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define R_SIZE 4096

char	*g_ret = (char*)malloc(sizeof(char) * R_SIZE);
int		g_i = 0;

char	*ft_itoa_base_10(int value) {
	if (value == -2147483648) {
		// ...
	}

	if (value < 0) {
		g_ret[g_i++] = '-';
		value *= -1;
	}
	
	//...
}

char	*ft_itoa_base(int value, int base) {
	
}

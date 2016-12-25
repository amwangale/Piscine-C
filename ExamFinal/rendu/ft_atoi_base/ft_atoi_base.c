/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 10:30:48 by exam              #+#    #+#             */
/*   Updated: 2016/09/22 10:52:26 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base(const char *str, int str_base) {
	int	i;
	int	ret;
	int sign;

	ret = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r')
		i++;

	sign = 1;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-') {
		i++;
		sign = -1;
	}

	while (str[i]) {
		if ('0' <= str[i] && str[i] <= '9')
			ret = ret * str_base + str[i] - '0';
		else if ('A' <= str[i] && str[i] <= 'F' - 16 + str_base)
			ret = ret * str_base + str[i] - 'A' + 10;
		else
			break;
		i++;
	}

	return (ret * sign);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 18:36:41 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/02 09:15:22 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	result = 0;
	while (*str >= '0' && *str <= '9' && *str != '\0')
	{
		result *= 10;
		result = result + *str - '0';
		str++;
	}
	return (result * sign);
}

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

int	ft_is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_is_whitespace(char *str)
{
	if (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	while (*str != '\0' && ft_is_whitespace(str))
		str++;
	sign = 1;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	result = 0;
	while (ft_is_digit(*str) && *str != '\0')
	{
		result *= 10;
		result = result + *str - '0';
		str++;
	}
	return (result * sign);
}

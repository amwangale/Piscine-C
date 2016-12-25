/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 13:04:51 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/05 14:32:49 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_whitespace(char *str)
{
	if (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int ret;
	int sign;

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
	ret = 0;
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		ret = ret * 10 + *str - '0';
		str++;
	}
	return (ret * sign);
}

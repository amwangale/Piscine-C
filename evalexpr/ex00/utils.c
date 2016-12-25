/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 11:24:39 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/18 11:56:50 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n < 10)
		ft_putchar((char)n + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int		ft_atoi(char *str)
{
	int	ret;
	int	sign;

	while (*str && (*str == ' ' || *str == '\t' || *str == '\n'))
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
	while (*str && ('0' <= *str && *str <= '9'))
	{
		ret = ret * 10 + *str - '0';
		str++;
	}
	return (ret * sign);
}

int		ft_strlen_without_whitespaces(char *str)
{
	int	l;

	l = 0;
	while (*str)
	{
		if (*str != ' ' && *str != '\t' && *str != '\n')
			l++;
		str++;
	}
	return (l);
}

char	*remove_whitespaces(char *str)
{
	char	*ret;
	int		size;
	int		i;
	int		j;

	size = ft_strlen_without_whitespaces(str);
	ret = (char*)malloc(sizeof(char) * (size + 1));
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			ret[j++] = str[i++];
		else
			i++;
	}
	ret[j] = '\0';
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuhasz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 16:40:26 by ajuhasz           #+#    #+#             */
/*   Updated: 2016/09/10 16:44:26 by ajuhasz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int		ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (*str++)
		l++;
	return (l);
}

void	ft_print_matrix(int **tab)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			c = tab[i][j] + '0';
			write(1, &c, 1);
			if (j < 8)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int		ft_check_arguments(int argc, char **argv)
{
	int	i;

	if (argc != 10)
		return (0);
	i = 1;
	while (i <= 9)
	{
		if (ft_strlen(argv[i]) != 9)
			return (0);
		i++;
	}
	return (1);
}

void	ft_fill_matrix(int **tab, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < 10)
	{
		j = 0;
		tab[i - 1] = (int*)malloc(sizeof(int) * 9);
		while (j < 9)
		{
			if (argv[i][j] == '.')
				tab[i - 1][j] = EMPTY;
			else
				tab[i - 1][j] = argv[i][j] - '0';
			j++;
		}
		i++;
	}
}

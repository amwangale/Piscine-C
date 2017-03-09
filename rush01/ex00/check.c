/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuhasz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 15:28:38 by ajuhasz           #+#    #+#             */
/*   Updated: 2016/09/11 19:38:19 by ajuhasz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

int		check_line(int **tab, int i, int n)
{
	int j;

	j = 0;
	while (j < 9)
	{
		if (tab[i][j] == n)
			return (0);
		j++;
	}
	return (1);
}

int		check_col(int **tab, int j, int n)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (tab[i][j] == n)
			return (0);
		i++;
	}
	return (1);
}

int		check_square(int **tab, int i, int j, int n)
{
	int square_i;
	int square_j;
	int x;
	int y;

	square_i = (i / 3) * 3;
	square_j = (j / 3) * 3;
	x = 0;
	while (x < 3)
	{
		y = 0;
		while (y < 3)
		{
			if (tab[square_i + x][square_j + y] == n)
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}

int		similar(int **tab, int **tab2)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (tab[i][j] != tab2[i][j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

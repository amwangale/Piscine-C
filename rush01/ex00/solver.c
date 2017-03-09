/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuhasz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 15:06:06 by ajuhasz           #+#    #+#             */
/*   Updated: 2016/09/11 17:25:25 by ajuhasz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solver.h"
#include "check.h"
#include <unistd.h>

int		find_next_position(int **tab, int *i, int *j)
{
	*i = 0;
	while (*i < 9)
	{
		*j = 0;
		while (*j < 9)
		{
			if (tab[*i][*j] == EMPTY)
				return (1);
			*j += 1;
		}
		*i += 1;
	}
	return (0);
}

int		is_consistent(int **tab, int i, int j, int n)
{
	if (check_line(tab, i, n) == 0)
		return (0);
	if (check_col(tab, j, n) == 0)
		return (0);
	if (check_square(tab, i, j, n) == 0)
		return (0);
	return (1);
}

int		ft_solve(int **tab)
{
	int i;
	int j;
	int n;

	if (find_next_position(tab, &i, &j) == 0)
		return (1);
	n = 1;
	while (n <= 9)
	{
		if (is_consistent(tab, i, j, n) == 1)
		{
			tab[i][j] = n;
			if (ft_solve(tab) == 1)
				return (1);
			tab[i][j] = EMPTY;
		}
		n++;
	}
	return (0);
}

int		ft_solve_invers(int **tab)
{
	int i;
	int j;
	int n;

	if (find_next_position(tab, &i, &j) == 0)
		return (1);
	n = 9;
	while (n >= 1)
	{
		if (is_consistent(tab, i, j, n) == 1)
		{
			tab[i][j] = n;
			if (ft_solve(tab) == 1)
				return (1);
			tab[i][j] = EMPTY;
		}
		n--;
	}
	return (0);
}

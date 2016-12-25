/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 09:09:01 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/20 15:20:10 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solver.h"
#include "structures.h"
#include <stdlib.h>

int			ft_min(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	if (b <= a && b <= c)
		return (b);
	return (c);
}

void		fill_dp_matrix_part_1(t_matrix *mat, int **dp)
{
	int	i;
	int	j;

	i = 0;
	while (i < mat->rows)
	{
		if (mat->matrix[i][0] == mat->empty_char)
			dp[i][0] = 1;
		else if (mat->matrix[i][0] == mat->obstacle_char)
			dp[i][0] = 0;
		i++;
	}
	j = 0;
	while (j < mat->cols)
	{
		if (mat->matrix[0][j] == mat->empty_char)
			dp[0][j] = 1;
		else if (mat->matrix[0][j] == mat->obstacle_char)
			dp[0][j] = 0;
		j++;
	}
}

void		fill_dp_matrix_part_2(t_matrix *mat, int **dp)
{
	int	i;
	int	j;

	i = 1;
	while (i < mat->rows)
	{
		j = 1;
		while (j < mat->cols)
		{
			if (mat->matrix[i][j] == mat->empty_char)
				dp[i][j] = ft_min(dp[i][j - 1],
						dp[i - 1][j], dp[i - 1][j - 1]) + 1;
			else if (mat->matrix[i][j] == mat->obstacle_char)
				dp[i][j] = 0;
			j++;
		}
		i++;
	}
}

void		dp_get_bsq(t_matrix *mat, int **dp, t_square *bsq)
{
	int	i;
	int	j;

	bsq->dim = 0;
	i = 0;
	while (i < mat->rows)
	{
		j = 0;
		while (j < mat->cols)
		{
			if (dp[i][j] > bsq->dim)
			{
				bsq->dim = dp[i][j];
				bsq->x = i;
				bsq->y = j;
			}
			j++;
		}
		i++;
	}
}

t_square	solve(t_matrix *mat)
{
	t_square	bsq;
	int			**dp;
	int			i;

	dp = (int**)malloc(sizeof(int*) * mat->rows);
	i = 0;
	while (i < mat->rows)
		dp[i++] = (int*)malloc(sizeof(int) * mat->cols);
	fill_dp_matrix_part_1(mat, dp);
	fill_dp_matrix_part_2(mat, dp);
	dp_get_bsq(mat, dp, &bsq);
	i = 0;
	while (i < mat->rows)
		free(dp[i++]);
	free(dp);
	return (bsq);
}

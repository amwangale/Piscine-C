/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 13:02:24 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/20 14:48:54 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printer.h"
#include <unistd.h>
#include <stdlib.h>

void	print_solution(t_matrix *mat, t_square bsq)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	str = (char*)malloc(sizeof(char) * mat->rows * (mat->cols + 1));
	k = 0;
	i = 0;
	while (i < mat->rows)
	{
		j = 0;
		while (j < mat->cols)
		{
			if (bsq.x - bsq.dim < i && i <= bsq.x &&
					bsq.y - bsq.dim < j && j <= bsq.y)
				str[k++] = mat->full_char;
			else
				str[k++] = mat->matrix[i][j];
			j++;
		}
		str[k++] = '\n';
		i++;
	}
	write(1, str, mat->rows * (mat->cols + 1));
	free(str);
}

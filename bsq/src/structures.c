/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 16:49:52 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/20 08:26:57 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structures.h"
#include <stdlib.h>

void	destroy_t_matrix(t_matrix *mat)
{
	int	i;

	i = 0;
	while (i < mat->rows)
	{
		free(mat->matrix[i]);
		i++;
	}
	free(mat->matrix);
}

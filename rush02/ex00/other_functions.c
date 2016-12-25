/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 17:50:12 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/18 13:18:06 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "other_functions.h"
#include "colle.h"
#include "is_colle.h"
#include "string_functions.h"
#include <stdlib.h>

void	init_vector(t_colle **vector)
{
	vector[0] = init_colle_00();
	vector[1] = init_colle_01();
	vector[2] = init_colle_02();
	vector[3] = init_colle_03();
	vector[4] = init_colle_04();
}

void	destroy_vector(t_colle **vector)
{
	free(vector[0]);
	free(vector[1]);
	free(vector[2]);
	free(vector[3]);
	free(vector[4]);
}

void	print_solution(int colle_nb, int x, int y)
{
	ft_putstr("[colle-0");
	ft_putnbr(colle_nb);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
}

void	print_the_other_solutions(int *solutions, int i, int x, int y)
{
	while (i < 5)
	{
		if (solutions[i] == 1)
		{
			ft_putstr(" || ");
			print_solution(i, x, y);
		}
		i++;
	}
}

void	check_and_print_first_solution_if_any(t_colle **vector, char *str,
		int x, int y)
{
	int	solutions[5];
	int	i;

	i = 0;
	while (i < 5)
	{
		if (is_colle(vector[i], str, x, y))
			solutions[i] = 1;
		else
			solutions[i] = 0;
		i++;
	}
	i = 0;
	while (i < 5 && solutions[i] == 0)
		i++;
	if (i < 5)
		print_solution(i++, x, y);
	if (i < 6)
		print_the_other_solutions(solutions, i, x, y);
	else
		ft_putstr("aucune");
}

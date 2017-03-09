/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuhasz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 13:24:03 by ajuhasz           #+#    #+#             */
/*   Updated: 2016/09/11 19:40:03 by ajuhasz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	ft_free(int **tab, int **tab2)
{
	int i;

	i = 0;
	while (i < 9)
	{
		free(tab2[i++]);
		free(tab[i++]);
	}
	free(tab2);
	free(tab);
}

int		main(int argc, char **argv)
{
	int **tab;
	int **tab2;

	if (ft_check_arguments(argc, argv) == 0)
	{
		write(1, "Erreur\n", 7);
		return (0);
	}
	tab2 = (int**)malloc(sizeof(int*) * 9);
	tab = (int**)malloc(sizeof(int*) * 9);
	ft_fill_matrix(tab, argv);
	ft_fill_matrix(tab2, argv);
	ft_solve(tab);
	ft_solve_invers(tab2);
	if (similar(tab, tab2) == 1)
		ft_print_matrix(tab);
	else
		write(1, "Erreur\n", 7);
	ft_free(tab, tab2);
	return (0);
}

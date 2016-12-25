/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuhasz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 13:24:03 by ajuhasz           #+#    #+#             */
/*   Updated: 2016/09/10 16:43:21 by ajuhasz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int		main(int argc, char **argv)
{
	int i;
	int **tab;

	if (ft_check_arguments(argc, argv) == 0)
	{
		write(1, "Erreur\n", 7);
		return (0);
	}
	tab = (int**)malloc(sizeof(int*) * 9);
	ft_fill_matrix(tab, argv);
	if (ft_solve(tab) == 1)
		ft_print_matrix(tab);
	else
		write(1, "Erreur\n", 7);
	i = 0;
	while (i < 9)
		free(tab[i++]);
	free(tab);
	return (0);
}

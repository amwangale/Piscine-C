/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 15:03:03 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/20 16:34:15 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structures.h"
#include "reader.h"
#include "solver.h"
#include "printer.h"
#include "string_functions.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void	process_arguments(int argc, char **argv)
{
	int			i;
	int			fd;
	t_matrix	*mat;
	t_square	bsq;

	i = 1;
	while (i < argc)
	{
		if ((fd = open(argv[i++], O_RDONLY)) == -1)
		{
			write(2, "bsq: ", 5);
			write(2, argv[i - 1], ft_strlen(argv[i - 1]));
			write(2, ": No such file or directory\n", 28);
			continue;
		}
		if ((mat = get_matrix_from_file(fd)) != NULL)
		{
			bsq = solve(mat);
			print_solution(mat, bsq);
			destroy_t_matrix(mat);
			free(mat);
		}
		else
			write(2, "map error\n", 10);
	}
}

int		main(int argc, char **argv)
{
	t_matrix	*mat;
	t_square	bsq;

	if (argc == 1)
	{
		if ((mat = get_matrix_from_file(0)) != NULL)
		{
			bsq = solve(mat);
			print_solution(mat, bsq);
			destroy_t_matrix(mat);
			free(mat);
		}
		else
			write(2, "map error\n", 10);
	}
	else
		process_arguments(argc, argv);
	return (0);
}

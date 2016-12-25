/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 15:06:08 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/18 13:44:41 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read_stdin.h"
#include "colle.h"
#include "colle_get_xy_dimension.h"
#include "string_functions.h"
#include "other_functions.h"
#include <stdlib.h>

int		main(void)
{
	char	*str;
	t_colle	*vector[5];
	int		x;
	int		y;

	init_vector(vector);
	str = read_stdin();
	x = get_colle_x_dimension(str);
	y = get_colle_y_dimension(str);
	check_and_print_first_solution_if_any(vector, str, x, y);
	ft_putchar('\n');
	free(str);
	destroy_vector(vector);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_functions.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 17:52:47 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/18 12:58:08 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OTHER_FUNCTIONS_H
# define OTHER_FUNCTIONS_H
# include "colle.h"

void	init_vector(t_colle **vector);
void	destroy_vector(t_colle **vector);
void	print_solution(int colle_nb, int x, int y);
void	print_other_solutions(int *solutions, int i, int x, int y);
void	check_and_print_first_solution_if_any(t_colle **vector, char *str,
		int x, int y);
#endif

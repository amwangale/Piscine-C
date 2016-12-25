/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuhasz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 16:24:04 by ajuhasz           #+#    #+#             */
/*   Updated: 2016/09/10 16:29:51 by ajuhasz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVER_H
# define SOLVER_H
# include "check.h"

int	find_next_position(int **tab, int *i, int *j);
int	is_consistent(int **tab, int i, int j, int n);
int	ft_solve(int **tab);
#endif

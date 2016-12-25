/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 12:19:30 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/20 13:43:21 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVER_H
# define SOLVER_H
# include "structures.h"

int			ft_min(int a, int b, int c);
void		fill_dp_matrix_part_1(t_matrix *mat, int **dp);
void		fill_dp_matrix_part_2(t_matrix *mat, int **dp);
void		dp_get_bsq(t_matrix *mat, int **dp, t_square *bsq);
t_square	solve(t_matrix *mat);
#endif

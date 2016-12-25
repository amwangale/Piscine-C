/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 13:32:29 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/20 13:21:04 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURES_H
# define STRUCTURES_H

typedef struct	s_matrix
{
	char	**matrix;
	int		rows;
	int		cols;
	char	empty_char;
	char	obstacle_char;
	char	full_char;
}				t_matrix;

typedef struct	s_square
{
	int		x;
	int		y;
	int		dim;
}				t_square;

void			destroy_t_matrix(t_matrix *mat);
#endif

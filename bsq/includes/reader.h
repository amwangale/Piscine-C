/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 15:08:05 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/20 08:41:55 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READER_H
# define READER_H
# include "structures.h"

char		*read_file(int fd);
int			get_info(char *str, t_matrix *mat);
int			fill_matrix(char *str, t_matrix *mat);
t_matrix	*get_matrix_from_file(int fd);
#endif

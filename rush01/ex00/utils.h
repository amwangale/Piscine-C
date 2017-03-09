/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuhasz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 16:41:02 by ajuhasz           #+#    #+#             */
/*   Updated: 2016/09/11 16:30:10 by ajuhasz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include <stdlib.h>
# include <unistd.h>
# include "solver.h"

int		ft_strlen(char *str);
void	ft_print_matrix(int **tab);
int		ft_check_arguments(int argc, char **argv);
void	ft_fill_matrix(int **tab, char **argv);
#endif

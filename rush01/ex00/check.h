/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuhasz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 15:44:19 by ajuhasz           #+#    #+#             */
/*   Updated: 2016/09/10 16:27:45 by ajuhasz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_H
# define CHECK_H
# define EMPTY 0

int		check_line(int **tab, int i, int n);
int		check_col(int **tab, int j, int n);
int		check_square(int **tab, int i, int j, int n);
#endif

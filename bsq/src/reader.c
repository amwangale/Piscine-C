/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 17:23:23 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/21 16:35:30 by saboanca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "reader.h"
#include "structures.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "string_functions.h"
#define BUF_SIZE 4096

char		*read_file(int fd)
{
	char	*s1;
	char	*s2;
	int		ret;

	s1 = (char*)malloc(sizeof(char));
	s1[0] = '\0';
	s2 = (char*)malloc(sizeof(char) * (BUF_SIZE + 1));
	while ((ret = read(fd, s2, BUF_SIZE)))
	{
		s2[ret] = '\0';
		s1 = realloc_and_strcat(s1, s2);
	}
	free(s2);
	close(fd);
	return (s1);
}

int			get_info(char *str, t_matrix *mat)
{
	if (ft_strlen(str) < 6)
		return (0);
	mat->rows = 0;
	while ('0' <= *str && *str <= '9' && *(str + 3) != '\0'
		&& *(str + 3) != '\n')
	{
		mat->rows = mat->rows * 10 + *str - '0';
		str++;
	}
	mat->empty_char = *str++;
	mat->obstacle_char = *str++;
	mat->full_char = *str++;
	if (*str++ != '\n')
		return (0);
	mat->cols = 0;
	while (*str && *str++ != '\n')
		mat->cols += 1;
	if (mat->cols == 0 || mat->rows == 0)
		return (0);
	return (1);
}

int			fill_matrix(char *str, t_matrix *mat)
{
	int	i;
	int	j;

	while (*str != '\n')
		str++;
	str++;
	i = -1;
	while (++i < mat->rows)
	{
		j = -1;
		while (++j < mat->cols)
		{
			if (*str == mat->empty_char)
				mat->matrix[i][j] = *str++;
			else if (*str == mat->obstacle_char)
				mat->matrix[i][j] = *str++;
			else
				return (0);
		}
		if (*str++ != '\n')
			return (0);
	}
	if (*str != '\0')
		return (0);
	return (1);
}

t_matrix	*get_matrix_from_file(int fd)
{
	t_matrix	*mat;
	char		*str;
	int			i;

	if ((str = read_file(fd)) == NULL)
		return (NULL);
	mat = (t_matrix*)malloc(sizeof(t_matrix));
	if (get_info(str, mat) == 0)
	{
		free(mat);
		return (0);
	}
	mat->matrix = (char**)malloc(sizeof(char*) * mat->rows);
	i = 0;
	while (i < mat->rows)
		mat->matrix[i++] = (char*)malloc(sizeof(char) * mat->cols);
	if (fill_matrix(str, mat) == 0)
	{
		destroy_t_matrix(mat);
		free(mat);
		return (NULL);
	}
	return (mat);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle_get_xy_dimension.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 12:22:28 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/18 12:22:35 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle_get_xy_dimension.h"

int	get_colle_x_dimension(char *str)
{
	int x;

	x = 0;
	while (*str && *str != '\n')
	{
		x++;
		str++;
	}
	return (x);
}

int	get_colle_y_dimension(char *str)
{
	int y;

	y = 0;
	while (*str)
	{
		if (*str == '\n')
			y++;
		str++;
	}
	return (y);
}

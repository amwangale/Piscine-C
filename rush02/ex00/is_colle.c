/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_colle.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 15:41:41 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/18 13:05:58 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle.h"
#include "is_colle.h"

int	is_colle(t_colle *colle, char *str, int x, int y)
{
	if (x < 1 || y < 1)
		return (1);
	if (is_colle_check_header(colle, str, x) == 0)
		return (0);
	if (is_colle_check_content(colle, str, x, y) == 0)
		return (0);
	if (is_colle_check_footer(colle, str, x, y) == 0)
		return (0);
	return (1);
}

int	is_colle_check_header(t_colle *colle, char *str, int x)
{
	int	i;

	if (*str++ != colle->header[0])
		return (0);
	i = 2;
	while (i++ < x)
	{
		if (*str++ != colle->header[1])
			return (0);
	}
	if (x != 1)
	{
		if (*str++ != colle->header[2])
			return (0);
	}
	if (*str++ != '\n')
		return (0);
	return (1);
}

int	is_colle_check_content(t_colle *colle, char *str, int x, int y)
{
	int i;
	int	j;

	str = str + x + 1;
	j = 2;
	while (j++ < y)
	{
		if (*str++ != colle->content[0])
			return (0);
		i = 2;
		while (i++ < x)
		{
			if (*str++ != colle->content[1])
				return (0);
		}
		if (x != 1)
		{
			if (*str++ != colle->content[2])
				return (0);
		}
		if (*str++ != '\n')
			return (0);
	}
	return (1);
}

int	is_colle_check_footer(t_colle *colle, char *str, int x, int y)
{
	int	i;

	str = str + (x + 1) * (y - 1);
	if (y != 1)
	{
		if (*str++ != colle->footer[0])
			return (0);
		i = 2;
		while (i++ < x)
		{
			if (*str++ != colle->footer[1])
				return (0);
		}
		if (x != 1)
		{
			if (*str++ != colle->footer[2])
				return (0);
		}
		if (*str++ != '\n')
			return (0);
	}
	return (1);
}

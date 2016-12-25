/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 15:27:48 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/18 12:19:00 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle.h"
#include <stdlib.h>

t_colle	*init_colle_00(void)
{
	t_colle	*colle;

	colle = (t_colle*)malloc(sizeof(t_colle));
	colle->header[0] = 'o';
	colle->header[1] = '-';
	colle->header[2] = 'o';
	colle->content[0] = '|';
	colle->content[1] = ' ';
	colle->content[2] = '|';
	colle->footer[0] = 'o';
	colle->footer[1] = '-';
	colle->footer[2] = 'o';
	return (colle);
}

t_colle	*init_colle_01(void)
{
	t_colle	*colle;

	colle = (t_colle*)malloc(sizeof(t_colle));
	colle->header[0] = '/';
	colle->header[1] = '*';
	colle->header[2] = '\\';
	colle->content[0] = '*';
	colle->content[1] = ' ';
	colle->content[2] = '*';
	colle->footer[0] = '\\';
	colle->footer[1] = '*';
	colle->footer[2] = '/';
	return (colle);
}

t_colle	*init_colle_02(void)
{
	t_colle	*colle;

	colle = (t_colle*)malloc(sizeof(t_colle));
	colle->header[0] = 'A';
	colle->header[1] = 'B';
	colle->header[2] = 'A';
	colle->content[0] = 'B';
	colle->content[1] = ' ';
	colle->content[2] = 'B';
	colle->footer[0] = 'C';
	colle->footer[1] = 'B';
	colle->footer[2] = 'C';
	return (colle);
}

t_colle	*init_colle_03(void)
{
	t_colle	*colle;

	colle = (t_colle*)malloc(sizeof(t_colle));
	colle->header[0] = 'A';
	colle->header[1] = 'B';
	colle->header[2] = 'C';
	colle->content[0] = 'B';
	colle->content[1] = ' ';
	colle->content[2] = 'B';
	colle->footer[0] = 'A';
	colle->footer[1] = 'B';
	colle->footer[2] = 'C';
	return (colle);
}

t_colle	*init_colle_04(void)
{
	t_colle	*colle;

	colle = (t_colle*)malloc(sizeof(t_colle));
	colle->header[0] = 'A';
	colle->header[1] = 'B';
	colle->header[2] = 'C';
	colle->content[0] = 'B';
	colle->content[1] = ' ';
	colle->content[2] = 'B';
	colle->footer[0] = 'C';
	colle->footer[1] = 'B';
	colle->footer[2] = 'A';
	return (colle);
}

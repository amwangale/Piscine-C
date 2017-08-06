/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 15:39:34 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/13 15:41:13 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	l;

	l = 1;
	while (begin_list)
	{
		l++;
		begin_list = begin_list->next;
	}
	return (l);
}

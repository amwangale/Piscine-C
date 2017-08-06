/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 15:33:36 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/13 15:36:22 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*current;

	if (*begin_list)
	{
		current = *begin_list;
		while (current->next)
			current = current->next;
		current->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}

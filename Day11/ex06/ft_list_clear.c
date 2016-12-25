/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 16:35:00 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/13 16:54:48 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list	*head;
	t_list	*elem;

	head = *begin_list;
	while (head)
	{
		elem = head;
		head = head->next;
		free(elem);
	}
	*begin_list = 0;
}

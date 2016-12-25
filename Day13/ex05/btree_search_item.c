/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 12:24:52 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/16 12:55:49 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void*, void*))
{
	void	*ret;

	if (root == 0)
		return (0);
	ret = btree_search_item(root->left, data_ref, cmpf);
	if (ret == 0)
	{
		if (cmpf(data_ref, root->item) == 0)
			ret = root->item;
	}
	if (ret == 0)
		ret = btree_search_item(root->right, data_ref, cmpf);
	return (ret);
}

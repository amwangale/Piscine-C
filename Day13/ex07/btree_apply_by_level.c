/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 13:10:58 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/16 15:56:18 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

/*
** g_is_first shows if, at the current level, the first node was visited or not
**	- it is set to 1 at the beginning of the level - btree_apply_by_level()
**	- it is set to 0 after applying the 1st node of the level - apply_to_level()
*/

int		g_is_first;

int		ft_max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

int		btree_level_count(t_btree *root)
{
	if (root == 0)
		return (0);
	return (1 + ft_max(btree_level_count(root->left),
				btree_level_count(root->right)));
}

void	apply_to_level(t_btree *root, int level, int actual_level,
		void (*applyf)(void *item, int current_level, int is_first_elem))
{
	if (level == 1)
	{
		applyf(root->item, actual_level, g_is_first);
		g_is_first = 0;
	}
	else if (level > 1)
	{
		if (root->left)
			apply_to_level(root->left, level - 1, actual_level, applyf);
		if (root->right)
			apply_to_level(root->right, level - 1, actual_level, applyf);
	}
}

void	btree_apply_by_level(t_btree *root,
		void (*applyf)(void *item, int current_level, int is_first_elem))
{
	int	level;
	int btree_height;
	int	*is_first;

	level = 1;
	btree_height = btree_level_count(root);
	while (level <= btree_height)
	{
		g_is_first = 1;
		apply_to_level(root, level, level, applyf);
		level++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 12:59:15 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/16 13:03:17 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#define MAX(a, b) ((a > b) * a + (a <= b) * b)

int	btree_level_count(t_btree *root)
{
	if (root == 0)
		return (0);
	return (1 + MAX(btree_level_count(root->left),
					btree_level_count(root->right))
	);
}

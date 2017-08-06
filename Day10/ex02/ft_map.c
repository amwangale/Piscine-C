/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 08:45:54 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/13 08:48:23 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*ret;
	int	i;

	ret = (int*)malloc(sizeof(int) * length);
	i = 1;
	while (i <= length)
	{
		ret[i] = f(tab[i]);
		i++;
	}
	return (ret);
}

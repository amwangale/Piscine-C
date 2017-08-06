/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 14:11:26 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/07 16:09:29 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	ret;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int*)malloc(sizeof(int) * (max - min));
	ret = max - min;
	i = 1;
	while (min < max)
		*range[i++] = min++;
	return (ret);
}

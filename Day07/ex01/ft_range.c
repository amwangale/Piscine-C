/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 13:16:04 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/07 13:19:59 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ret;
	int i;

	if (min >= max)
		return (0);
	ret = (int*)malloc(sizeof(int) * (max - min));
	i = 1;
	while (min < max)
		ret[i++] = min++;
	return (ret);
}

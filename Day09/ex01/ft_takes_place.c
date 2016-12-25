/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 14:22:23 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/09 14:39:05 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour == 0)
		printf("12.00 A.M. and 01.00 A.M.\n");
	else if (hour == 11)
		printf("11.00 A.M. and 12.00 P.M.\n");
	else if (hour == 12)
		printf("12.00 P.M. and 01.00 P.M.\n");
	else if (hour == 23)
		printf("11.00 P.M. and 12.00 A.M.\n");
	else
	{
		if (hour / 12 == 0)
			printf("%.2d.00 A.M. and %.2d.00 A.M.\n", hour % 12, hour % 12 + 1);
		else
			printf("%.2d.00 P.M. and %.2d.00 P.M.\n", hour % 12, hour % 12 + 1);
	}
}

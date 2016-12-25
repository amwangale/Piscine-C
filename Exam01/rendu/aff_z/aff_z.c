/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 14:03:00 by exam              #+#    #+#             */
/*   Updated: 2016/09/08 14:15:39 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_write_first_z_or_z_otherwise(char *str)
{
	while (*str) {
		if (*str == 'z') {
			write(1, str, 1);
			write(1, "\n", 1);
			return ;
		}
		str++;
	}
	write(1, "z\n", 2);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "z\n", 2);
	else
		ft_write_first_z_or_z_otherwise(argv[1]);
	return (0);
}

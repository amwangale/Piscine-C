/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 11:28:52 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/14 13:03:49 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "ft_display_file.h"

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		ft_echo_stdin();
	i = 1;
	while (i < argc)
	{
		ft_display_file(argv[i]);
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 11:28:52 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/14 14:25:46 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "ft_display_file.h"

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write_error("File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		write_error("Too many arguments.\n");
		return (1);
	}
	if (ft_display_file(argv[1]) == -1)
		return (1);
	return (0);
}

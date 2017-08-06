/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 11:45:16 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/14 14:26:43 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"
#include "utils.h"
#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 40960

int		ft_display_file(char *filename)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("ft_cat: ");
		ft_putstr(filename);
		ft_putstr(": No such file or directory\n");
		return (-1);
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
	{
		ft_putstr("close() failed\n");
		return (-1);
	}
	return (0);
}

void	ft_echo_stdin(void)
{
	int		ret;
	char	buf[BUF_SIZE + 1];

	while ((ret = read(1, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
}

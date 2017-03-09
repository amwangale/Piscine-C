/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 13:39:19 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/15 09:10:20 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"
#include "utils.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#define BUF_SIZE 409600

void	put_error(char *filename)
{
	write_error("ft_tail: ");
	write_error(filename);
	write_error(": No such file or directory\n");
}

int		ft_tail(char *filename, int n)
{
	int		fd1;
	int		fd2;
	char	buf[BUF_SIZE + 1];
	int		ret;

	fd1 = open(filename, O_RDONLY);
	fd2 = open(filename, O_RDONLY);
	if (fd1 == -1 || fd2 == -1)
	{
		put_error(filename);
		return (-1);
	}
	while (n--)
		ret = read(fd1, buf, 1);
	while ((ret = read(fd1, buf, 1)) == 1)
		read(fd2, buf, 1);
	while ((ret = read(fd2, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	close(fd1);
	close(fd2);
	return (0);
}

int		ft_tail_multiple(char *filename, int n)
{
	int	fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write_error("ft_tail: ");
		write_error(filename);
		write_error(": No such file or directory\n");
		return (-1);
	}
	close(fd);
	ft_putstr("==> ");
	ft_putstr(filename);
	ft_putstr(" <==\n");
	return (ft_tail(filename, n));
}

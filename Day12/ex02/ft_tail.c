/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 13:39:19 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/14 16:44:35 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"
#include "utils.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#define BUF_SIZE 409600

int		ft_tail(char *filename, int n)
{
	int		i;
	int		fd1;
	int		fd2;
	char	buf[BUF_SIZE + 1];
	int		ret;

	fd1 = open(filename, O_RDONLY);
	fd2 = open(filename, O_RDONLY);
	if (fd1 == -1 || fd2 == -1)
	{
		write_error("ft_tail: ");
		write_error(filename);
		write_error(": No such file or directory\n");
		return (-1);
	}
	i = n;
	while (i--)
		ret = read(fd1, buf, 1);
	while ((ret = read(fd1, buf, 1)) == 1)
		read(fd2, buf, 1);
	while ((ret = read(fd2, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd1) == -1 || close(fd2) == -1)
	{
		write_error("close() failed\n");
		return (-1);
	}
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

/*
int		ft_tail(char *filename, int n)
{
	int		fd;
	char	*buf_1;
	char	*buf_2;
	char	*buf_aux;
	int		ret;

	fd = open(filename, O_RDONLY);
	buf_1 = (char*)malloc(sizeof(char) * BUF_SIZE + 1);
	ret = read(fd, buf_1, BUF_SIZE);
	if (ret != BUF_SIZE)
	{
		ft_putstr(&buf_1[ret - n]);
		free(buf_1);
		return (0);
	}
	buf_2 = (char*)malloc(sizeof(char) * BUF_SIZE + 1);
	while ((ret = read(fd, buf_2, BUF_SIZE)) == BUF_SIZE)
	{
		buf_aux = buf_1;
		buf_1 = buf_2;
		free(buf_aux);
		buf_2 = (char*)malloc(sizeof(char) * BUF_SIZE + 1);
	}
	ft_putstr(&buf_2[ret - n]);
	free(buf_1);
	free(buf_2);
	close(fd);
	return (0);
}
*/

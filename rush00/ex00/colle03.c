/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhudema <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 16:21:46 by dhudema           #+#    #+#             */
/*   Updated: 2016/09/03 18:17:43 by amaior           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	print_line(char *template, int y);

void	init_variables(char *h, char *c, char *f)
{
	h[0] = 'A';
	h[1] = 'B';
	h[2] = 'C';
	c[0] = 'B';
	c[1] = ' ';
	c[2] = 'B';
	f[0] = 'A';
	f[1] = 'B';
	f[2] = 'C';
}

void	colle(int x, int y)
{
	char	header[3];
	char	content[3];
	char	footer[3];
	int		i;

	init_variables(header, content, footer);
	if (x < 1 || y < 1)
		return ;
	print_line(header, x);
	i = 2;
	while (i < y)
	{
		print_line(content, x);
		i++;
	}
	if (y != 1)
		print_line(footer, x);
}

void	print_line(char *template, int x)
{
	int j;

	ft_putchar(template[0]);
	j = 2;
	while (j < x)
	{
		ft_putchar(template[1]);
		j++;
	}
	if (x != 1)
		ft_putchar(template[2]);
	ft_putchar('\n');
}

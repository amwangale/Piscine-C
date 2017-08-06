/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 10:30:21 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/01 16:05:04 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_put_two_digits(int n)
{
	char	a1;
	char	a2;

	a1 = (char)(n / 10) + '0';
	a2 = (char)(n % 10) + '0';
	ft_putchar(a1);
	ft_putchar(a2);
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_put_two_digits(i);
			ft_putchar(' ');
			ft_put_two_digits(j);
			if (i != 98 || j != 99)
			{
				ft_putchar(',');
			}
			j = j + 1;
		}
		i = i + 1;
	}
}

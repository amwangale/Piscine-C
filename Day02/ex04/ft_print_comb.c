/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 09:20:07 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/01 16:03:35 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_put_comb(char i, char j, char k)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
	if (i != '7' || j != '8' || k != '9')
	{
		ft_putchar(',');
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i < '8')
	{
		j = i + 1;
		while (j < '9')
		{
			k = j + 1;
			while (k < '9')
			{
				ft_put_comb(i, j, k);
				k++;
			}
		}
		i++;
	}
}

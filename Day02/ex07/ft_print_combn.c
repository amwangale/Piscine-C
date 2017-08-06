/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 11:42:27 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/01 16:06:33 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_successor(int *tab, int k)
{
	if (tab[k] < 10)
	{
		tab[k]++;
		return (1);
	}
	return (0);
}

int		ft_is_valid(int *tab, int k, int n)
{
	int	i;

	if (tab[k] > 10 - n + k)
		return (0);
	i = 0;
	while (i < k)
	{
		if (tab[i] >= tab[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	ft_print_combn_backtrack(int *tab, int k, int n)
{
	int	i;

	tab[k] = -1;
	while (ft_successor(tab, k) == 1)
	{
		if (ft_is_valid(tab, k, n) == 1)
		{
			if (ft_is_valid(tab, k, n) == 1 && k == n - 1)
			{
				i = 0;
				while (i < n)
					ft_putchar((char)tab[i++] + '0');
				if (tab[0] <= 9 - n)
				{
					ft_putchar(',');
				}
			}
			else
				ft_print_combn_backtrack(tab, k + 1, n);
		}
	}
}

void	ft_print_combn(int n)
{
	int	tab[17];

	ft_print_combn_backtrack(tab, 0, n);
}

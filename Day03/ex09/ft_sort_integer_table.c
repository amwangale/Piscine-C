/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 09:38:08 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/02 10:06:54 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int	aux;
	int	swaps;
	int	i;

	swaps = 1;
	while (swaps == 1)
	{
		swaps = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				aux = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = aux;
			}
			i++;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 15:38:18 by exam              #+#    #+#             */
/*   Updated: 2016/09/08 15:44:52 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b) {
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

void	sort_int_tab(int *tab, unsigned int size) {
	unsigned int i;
	int swaps;

	i = 0;
	swaps = 1;
	while (swaps) {
		swaps = 0;
		i = 0;
		while (i < size - 1) {
			if (tab[i] > tab[i + 1]) {
				ft_swap(&tab[i], &tab[i + 1]);
				swaps = 1;
			}
			i++;
		}
	}
}

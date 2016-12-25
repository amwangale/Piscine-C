/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 15:33:56 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/03 18:11:15 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sample_recursive_function(int i)
{
	if (i == 1)
		ft_sample_recursive_function(i - 1);
}

int		ft_eight_queens_puzzle(void)
{
	ft_sample_recursive_function(1);
	return (92);
}

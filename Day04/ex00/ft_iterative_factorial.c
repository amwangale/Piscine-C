/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 18:16:06 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/03 11:22:56 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	ret;
	int	i;

	if (nb >= 13)
		return (0);
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = 1;
	ret = 1;
	while (i <= nb)
	{
		ret *= i;
		i++;
	}
	return (ret);
}

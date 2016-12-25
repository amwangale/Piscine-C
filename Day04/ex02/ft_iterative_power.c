/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 11:33:35 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/03 11:46:24 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int ret;

	if (power < 0)
		return (0);
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	ret = 1;
	while (power > 0)
	{
		if (power % 2 == 1)
		{
			ret = ret * nb;
			power--;
		}
		nb = nb * nb;
		power = power / 2;
	}
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 18:16:45 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/09 18:20:48 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) ft_get_abs_value(Value)

int	ft_get_abs_value(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

#endif

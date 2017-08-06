/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 14:12:42 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/06 14:19:36 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_numeric(char c)
{
	return (0 <= c && c <= 9);
}

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!ft_char_is_numeric(*str))
			return (0);
		str++;
	}
	return (1);
}

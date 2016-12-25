/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 14:29:11 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/06 14:37:20 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_printable(char c)
{
	if (c >= 32)
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!ft_char_is_printable(*str))
			return (0);
		str++;
	}
	return (1);
}

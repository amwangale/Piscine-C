/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 14:26:02 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/06 14:28:08 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_uppercase(char c)
{
	return ('A' <= c && c <= 'Z');
}

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!ft_char_is_uppercase(*str))
			return (1);
		str++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 14:22:32 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/06 14:24:52 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_lowercase(char c)
{
	return ('a' <= c && c <= 'z');
}

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!ft_char_is_lowercase(*str))
			return (1);
		str++;
	}
	return (0);
}

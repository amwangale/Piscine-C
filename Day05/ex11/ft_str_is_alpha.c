/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 13:58:50 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/06 14:10:07 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_alpha(char c)
{
	return ('a' <= c && c <= 'z');
}

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!ft_char_is_alpha(*str))
			return (0);
		str++;
	}
	return (1);
}

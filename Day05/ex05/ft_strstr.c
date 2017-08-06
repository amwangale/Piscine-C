/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 18:25:32 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/05 18:41:18 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *begin;
	char *pattern;

	while (*str != '\0')
	{
		begin = str;
		pattern = to_find;
		while (*str != '\0' && *pattern != '\0' && *str == *pattern)
		{
			str++;
			pattern++;
		}
		if (!*pattern)
			return (begin);
		str = begin + 1;
	}
	return (0);
}

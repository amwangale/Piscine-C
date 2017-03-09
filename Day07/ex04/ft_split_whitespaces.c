/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 11:35:56 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/08 13:25:54 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_separator(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int		ft_count_words(char *str)
{
	int	ret;
	int i;

	ret = 0;
	if (!ft_is_separator(str[0]))
		ret = 1;
	i = 1;
	while (str[i] != '\0')
	{
		if (ft_is_separator(str[i - 1]) && !ft_is_separator(str[i]))
			ret++;
		i++;
	}
}

/*
** to be done... maybe
*/

char	**ft_split_whitespaces(char *str)
{
	char	**ret;

	ret = (char**)malloc(sizeof(char*) * ft_count_words(str));
}

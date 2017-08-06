/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 15:09:38 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/09 17:08:53 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

int		ft_count_words(char *str)
{
	int	ret;
	int	i;

	ret = 0;
	if (!(*str == ' ' || *str == '\t' || *str == '\n'))
		ret = 1;
	i = 1;
	while (str[i] != '\0')
	{
		if ((str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n') &&
				!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			ret++;
		i++;
	}
	return (ret);
}

char	*ft_get_next_word_start(char *str)
{
	int	i;

	i = 0;
	while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
		i++;
	return (str + i);
}

char	*ft_get_next_word_end(char *str)
{
	int	i;

	i = 0;
	while (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
		i++;
	return (str + i);
}

char	**ft_split_whitespaces(char *str)
{
	char	**ret;
	int		i;
	int		word_count;
	char	*word;
	char	*start;

	word = str;
	word_count = ft_count_words(str);
	ret = (char**)malloc(sizeof(char*) * word_count);
	i = 1;
	while (i < word_count)
	{
		start = ft_get_next_word_start(word);
		word = ft_get_next_word_end(start);
		ret[i] = (char *)malloc(word - start);
		ft_strncpy(ret[i], start, word - start);
		i++;
	}
	ret[i] = 0;
	return (ret);
}

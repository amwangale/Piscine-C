/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 16:31:27 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/08 11:13:49 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int l;

	l = 0;
	while (*str)
	{
		l++;
		str++;
	}
	return (l);
}

int		ft_my_length(int argc, char **argv)
{
	int i;
	int l;

	l = 0;
	i = 1;
	while (i < argc)
	{
		l += ft_strlen(argv[i]) + 1;
		i++;
	}
	l++;
	return (l);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*ret;

	ret = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ret);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*ret;
	int		i;

	ret = (char*)malloc(sizeof(char) * ft_my_length(argc, argv));
	i = 1;
	while (i < argc)
	{
		ret = ft_strcat(ret, argv[i]);
		ret = ft_strcat(ret, "\n");
		i++;
	}
	return (ret);
}

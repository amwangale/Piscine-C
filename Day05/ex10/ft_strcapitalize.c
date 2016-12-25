/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 09:55:48 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/06 12:52:52 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alpha_num(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	if ('A' <= c && c <= 'Z')
		return (1);
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

int		ft_is_alpha(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	if ('a' <= str[0] && str[0] <= 'z')
		str[0] = str[0] - 'a' + 'A';
	i = 1;
	while (str[i] != '\0')
	{
		if (ft_is_alpha(str[i]))
		{
			if (ft_is_alpha_num(str[i - 1]))
			{
				if ('A' <= str[i] && str[i] <= 'Z')
					str[i] = str[i] - 'A' + 'a';
			}
			else if ('a' <= str[i] && str[i] <= 'z')
				str[i] = str[i] - 'a' + 'A';
		}
		i++;
	}
	return (str);
}

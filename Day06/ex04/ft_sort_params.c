/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 10:25:13 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/07 11:46:53 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 != '\0')
		return (*s1);
	if (*s2 != '\0')
		return (-*s2);
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		index_min;
	int		used[30000];

	i = argc;
	while (i > 0)
		used[i--] = 0;
	while (i < argc)
	{
		index_min = 1;
		j = 2;
		while (j < argc)
		{
			if (ft_strcmp(argv[j], argv[index_min]) < 0 && !used[j])
				index_min = j;
			j++;
		}
		ft_putstr(argv[index_min]);
		used[index_min] = 1;
		i++;
	}
	return (0);
}

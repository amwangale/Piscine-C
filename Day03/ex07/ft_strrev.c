/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 18:06:37 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/01 18:34:31 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char *a, char *b)
{
	char	c;

	c = *a;
	*a = *b;
	*b = c;
}

char	*ft_strrev(char *str)
{
	char	*ret;
	char	*beg;
	char	*end;

	ret = str;
	beg = str;
	end = str;
	while (*end != '\0')
		end++;
	end--;
	while (beg < end)
	{
		ft_swap(beg, end);
		beg++;
		end--;
	}
	return (ret);
}

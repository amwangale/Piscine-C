/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 14:39:30 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/05 15:29:52 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	dest_iterator;
	int	src_iterator;

	dest_iterator = 0;
	src_iterator = 0;
	while (src[src_iterator] != '\0')
		dest[dest_iterator++] = src[src_iterator++];
	return (dest);
}

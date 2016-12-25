/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_stdin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 15:08:49 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/18 13:38:54 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read_stdin.h"
#include "string_functions.h"
#include <stdlib.h>
#include <unistd.h>
#define BUF_SIZE 40960

char	*read_stdin(void)
{
	char	*s1;
	char	*s2;
	int		ret;

	s1 = (char*)malloc(sizeof(char));
	s1[0] = '\0';
	s2 = (char*)malloc(sizeof(char) * (BUF_SIZE + 1));
	while ((ret = read(0, s2, BUF_SIZE)))
	{
		s2[ret] = '\0';
		s1 = realloc_and_strcat(s1, s2);
	}
	free(s2);
	return (s1);
}

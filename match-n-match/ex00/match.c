/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcincean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 11:40:00 by vcincean          #+#    #+#             */
/*   Updated: 2016/09/10 19:09:45 by vcincean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** s1 = text, s2 = pattern
** Let us consider any character in s2
** Case 0. both s1 and s2 are null => match
** Case 1. the character is '*'
** 	 	1.1. ignore '*' and move to the next character in s2
** 	 	1.2. '*' matches with one or more characters in s1
** Case 2. the character is NOT '*'
** 	 	2.1. if the current character in s1 matches with the current character
** in s2, then move to the next character in s2 and in s1
** 	 	2.2. otherwise, s1 and s2 do NOT match
*/

int	match(char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 == '\0')
		return (1);
	if (*s2 == '*' && *(s2 + 1) != '\0' && s2[1] != '*' && *s1 == '\0')
		return (0);
	if (*s2 == '*')
		return (match(s1, s2 + 1) || match(s1 + 1, s2));
	if (*s2 == *s1)
		return (match(s1 + 1, s2 + 1));
	return (0);
}

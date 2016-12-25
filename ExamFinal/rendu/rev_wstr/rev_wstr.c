/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 11:46:48 by exam              #+#    #+#             */
/*   Updated: 2016/09/22 12:13:37 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#include <stdio.h>

int count_words(char *str) {
	int count, i;

	if (str[0] == '\0')
		return (0);
	count = 1;
	i = 0;
	while (str[i]) {
		if (str[i] == ' ')
			count++;
		i++;
	}
	return (count);
}	

int	ft_wordlen(char *str) {
	int	l;

	l = 0;
	while (*str && *str == ' ')
		str++;
	while (*str && *str != ' ' && *str != '\t') {
		l++;
		str++;
	}
	return (l);
}

int	ft_strlen(char *str) {
	int	l;

	l = 0;
	while (*str++)
		l++;
	return l;
}

char	*get_next_word(char **str) {
	char	*ret;
	int		i;
	char	*str_copy;

	str_copy = *str;
	while (*str_copy && *str_copy == ' ')
		str_copy++;
	ret = (char*)malloc(sizeof(char) * (ft_wordlen(str_copy) + 1));
	i = 0;
	while (*str_copy && *str_copy != ' ' && *str_copy != '\t') {
		ret[i] = *str_copy;
		i++;
		str_copy++;
	}
	ret[i] = '\0';
	
	*str = str_copy;

	return (ret);
}

void solve(char *str) {
	char	**v;
	int i;
	int nb_words;

	nb_words = count_words(str);
	v = (char**)malloc(sizeof(char) * nb_words);
	i = 0;
	for (i = 0; i < nb_words; i++) {
		v[i] = get_next_word(&str);
	}
	
	write(1, v[nb_words - 1], ft_strlen(v[nb_words - 1]));
	for (i = nb_words - 2; i >= 0; i--) {
		write(1, " ", 1);
		write(1, v[i], ft_strlen(v[i]));
		free(v[i]);
	}
	free(v);
	write(1, "\n", 1);
}

int	main(int argc, char **argv) {
	int	i;

	if (argc != 2)
		write(1, "\n", 1);
	else {
		i = 1;
		while (i < argc)
			solve(argv[i++]);
	}
	return 0;
}

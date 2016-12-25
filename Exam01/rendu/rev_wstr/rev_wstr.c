/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 15:12:48 by exam              #+#    #+#             */
/*   Updated: 2016/09/08 15:36:37 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** next time ...
*/

#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str) {
	int l = 0;

	while (*str++)
		l++;
	return l;
}

void	ft_strcat(char *dest, char *src) {
	char*	ret;

	ret = dest;
	
	while (*dest)
		dest++;

	while (*src) {
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return ret;
}

int		number_of_words(char *str) {
	int	ret;
	int i;

	if (str[0])
		ret = 1; // NU avem spatii la inceput, deci sigur e cuvant
	else
		return 0; // sir vid

	i = 1;
	ret = 1;
	while (str[i]) {
		if (str[i] != ' ' && str[i - 1] == ' ')
			ret++;
		i++;
	}
	return ret;
}

char	*get_nth_word(char *str) {
	// ...
}

void	do_solve(char *str) {
	char	*str_to_print;

	str_to_write = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1));


	// ... solve here
	
	

	write(1, str_to_write, ft_strlen(str));
	write(1, "\n", 1);

	free(str_to_write);
}

int	main(int argc, char **argv) {
	if (argc != 2)
		write(1, "\n", 1);
	else
		do_solve(argv[1]);
	return (0);
}

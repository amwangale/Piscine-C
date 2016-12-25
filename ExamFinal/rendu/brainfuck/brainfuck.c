/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 12:34:06 by exam              #+#    #+#             */
/*   Updated: 2016/09/22 14:16:07 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str) {
	int	l;

	l = 0;
	while (*str++)
		l++;
	return (l);
}

char	*ft_strcpy(char *dest, char *src) {
	int	i;

	i = 0;
	while (src[i]) {
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

void	brainfuck(char *str) {
	char vec[2048];
	int	paranteze[4096];
	int	vec_it;
	int	str_it;
	int	paranteza_c;
	int	i;

	vec_it = 0;
	while (vec_it < 2048)
		vec[vec_it++] = 0;

	str_it = 0;
	while (str[str_it] != '\0') {
		if (str[str_it] == '[') {
			paranteza_c = 1;
			i = str_it + 1;
			while (paranteza_c != 0) {
				if (str[i] == '[')
					paranteza_c++;
				else if (str[i] == ']')
					paranteza_c--;
				i++;
			}
			paranteze[str_it] = i - 1;
		}
		else if (str[str_it] == ']') {
			paranteza_c = -1;
			i = str_it - 1;
			while (paranteza_c != 0) {
				if (str[i] == '[')
					paranteza_c++;
				else if (str[i] == ']')
					paranteza_c--;
				i--;
			}
			paranteze[str_it] = i + 1;
		}
		else
			paranteze[str_it] = 0;
		str_it++;
	}

	vec_it = 0;
	str_it = 0;
	paranteza_c = 0;

	while (str[str_it] != '\0') {
		
		if (str[str_it] == '>') {
			vec_it++;
			str_it++;
		}
		else if (str[str_it] == '<') {
			vec_it--;
			str_it++;
		}
		else if (str[str_it] == '+') {
			vec[vec_it] += 1;
			str_it++;
		}
		else if (str[str_it] == '-') {
			vec[vec_it] -= 1;
			str_it++;
		}
		else if (str[str_it] == '.') {
			write(1, &vec[vec_it], 1);
			str_it++;
		}
		else if (str[str_it] == '[') {
			if (vec[vec_it] == 0) {
				i = str_it + 1;
				while (paranteze[i] != str_it)
					i++;
				str_it = i;
			}
			else
				str_it++;
		}
		else if (str[str_it] == ']') {
			if (vec[vec_it] != 0) {
				i = str_it - 1;
				while (paranteze[i] != str_it)
					i--;
				str_it = i;
			}
			else
				str_it++;
		}
		else {
			str_it++;
		}
	}
}

int	main(int argc, char **argv) {
	if (argc != 2)
		write(1, "\n", 1);
	else {
		brainfuck(argv[1]);
	}
	return (0);
}

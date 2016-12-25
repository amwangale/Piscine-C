/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 14:18:39 by exam              #+#    #+#             */
/*   Updated: 2016/09/15 14:40:33 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char reverse_bits(unsigned char octet) {
	unsigned char ret;
	unsigned char bit;

	ret = 0;

	bit = octet / 128;
	octet %= 128;
	ret |= bit;

	bit = (octet / 64) << 1;
	octet %= 64;
	ret |= bit;

	bit = (octet / 32) << 2;
	octet %= 32;
	ret |= bit;

	bit = (octet / 16) << 3;
	octet %= 16;
	ret |= bit;

	bit = (octet / 8) << 4;
	octet %= 8;
	ret |= bit;

	bit = (octet / 4) << 5;
	octet %= 4;
	ret |= bit;

	bit = (octet / 2) << 6;
	octet %= 2;
	ret |= bit;

	bit = (octet % 2) << 7;
	ret |= bit;

	return ret;
}

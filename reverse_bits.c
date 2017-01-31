/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkotliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/25 15:13:29 by kkotliar          #+#    #+#             */
/*   Updated: 2016/12/26 17:35:30 by kkotliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char tmp;

	tmp = octet;
	tmp = (octet << 4) | (octet >> 4);
	return (tmp);
}

int main ()
{
	unsigned char octet;
	octet = 254;


	printf("%d", octet);

	printf("\n");
	printf("%d", reverse_bits(octet));

}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenes <sbenes@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:41:35 by sbenes            #+#    #+#             */
/*   Updated: 2023/03/04 15:33:25 by sbenes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
ft_putnbr_hex - converts the input to its hexadecimal value, checking for case indicator (%x or %X).

START
|
Setting the hex string to choose the character from - in two variants depending on the case we want.
|
Taking care of negative number. Converting to unsigned int representation of unsigned int max value + nb.
The formula is (unsigned int)(4294967296 + nb).
Details: example with -1 and 1:
-1 in binary (8 bits) - 11111111 (1 is 00000001 and negative value is represented by inverting it and add 1 = 11111110 +1 = 11111111)
-1 in binary (32 bits) - 11111111 11111111 11111111 11111111;
MSB is always the leftmost bit - here represented by 1. Indicating a negative number.
-1 in binary (32 bits) represented as unsigned int: 4294967295.
--
1 in binary (8 bits) - 00000001
1 in bibnary (32 bits) - 00000000 00000000 00000000 00000001
MSB is always the leftmost bit - here represented by 0. Indicating a positive number.
1 in binary (32 bits) represented as unsigned int: 1.
|
Using previous for the formula (unsigned int)(4294967296 + nb), using example of 1 and -1
1:  (unsigned int)(4294967296 + 1) = (unsigned int)(4294967297) = hexadecinal for 4294967297 is 0x100000001. 
It will print only 0x1 which is equivalent of 1 in decimal.
-1: (unsigned int)(4294967296 + (-1)) = (unsigned int)(4294967295) = hexadecimal for 4294967295 is 0xffffffff. 
It will print full 32 bit format: ffffffff, which is the same as UINT_MAX.
|
When bigger than 15, recursive call with a nb / 16. Increment len to update the characters writen.
|
write to stdout the value modulo 16 = result representing the index on hex string. Increment len.
|
Returns len to measure characters written.
|
END
*/
int	ft_putnbr_hex(int nb, char x)
{
	char	*hex;
	int		len;
	unsigned int	value;

	len = 0;
	hex = "0123456789abcdef";
	if (x == 'X')
		hex = "0123456789ABCDEF";
	if (nb < 0)
		value = (unsigned int)(4294967296 + nb);
	else
		value = (unsigned int)nb;
	if (value >= 16)
		len += ft_putnbr_hex(value / 16, x);
	write(1, &hex[value % 16], 1);
	len++;
	return (len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenes <sbenes@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:41:35 by sbenes            #+#    #+#             */
/*   Updated: 2023/03/05 15:28:06 by sbenes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
ft_putnbr_hex - converts the input to its hexadecimal value, 
checking for case indicator (%x or %X).

START
|
Setting the hex string to choose the character from,
in two variants depending on the case we want.
|
Taking care of negative number. Converting to unsigned 
int format representation of negative int.
The formula is (unsigned int)(4294967296 + nb), where 
the number is UINT_MAX + 1. It is a equivalent
of bitwise operation, "flipping" the sign.
Example with -1:
4294967295 + (-1) + 1 = 4294967295 used to get the 
right hexadecimal value just as original printf.
|
Positive numbers - just casted to (unsigned int).
|
When bigger than 15, recursive call with a nb / 16. 
Increment len to update the characters writen.
|
write to stdout the value modulo 16 = result representing 
the index on hex string. Increment len.
|
Returns len to measure characters written.
|
END
*/

int	ft_putnbr_hex(int nb, char x)
{
	char			*hex;
	int				len;
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

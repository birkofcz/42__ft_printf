/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenes <sbenes@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:30:30 by sbenes            #+#    #+#             */
/*   Updated: 2023/03/03 17:01:33 by sbenes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrlen_phex(unsigned long long nb)
{
	int		i;

	i = 1;
	while (nb > 15)
	{
		nb = nb / 16;
		i++;
	}
	return (i);
}

void	ft_putnbr_phex(unsigned long long nb)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (nb >= 16)
		ft_putnbr_phex(nb / 16);
	write(1, &hex[nb % 16], 1);
}

/*
-- ft_putptr --

To print the memory address of a value.
Memory adress is constructed as "0x" + hexadecimal number representing the pointer value. 
Start
|
Make sure there is ptr. If ptr = NULL, function needs to print "(nil)".
|
Cannot get the pointer value directly, we need to cast (unsigned long long) to ptr 
and store it as unsigned long long ptr_value. 
Unsigned long long is int datatype ensuring that it will take whatever size of 
pointer value, which is system dependent. 
|
Write  "0x" to the stdout.
|
Send pointer value (ptr_value) to the function which will convert it to hexadecimal (base 16) and write to stdout.
|
Return number of characters printed from the ft_nbrlen_hex function.

*/
int	ft_putptr(void *ptr)
{
	unsigned long long	ptr_value;
	char *s;

	if (!ptr)
	{
		s = "(nil)";
		ft_putstr(s);
		return (ft_strlen(s));
	}
	ptr_value = (unsigned long long)ptr;
	write(1, "0x", 2);
	ft_putnbr_phex(ptr_value);
	return (ft_nbrlen_hex(ptr_value));
}

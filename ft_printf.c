/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenes <sbenes@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:18:37 by sbenes            #+#    #+#             */
/*   Updated: 2023/03/02 16:53:19 by sbenes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Handle all the following conversions:
. %c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign.
*/

#include "ft_printf.h"

int	ft_parameter_type(va_list args, char data_type)
{
	int	nc_printed;

	nc_printed = 0;
	if (data_type == 'c')
		nc_printed = ft_putchar(va_arg(args, int));
	else if (data_type == 's')
		nc_printed = ft_putstr(va_arg(args, char *));
	return (nc_printed);
}
/*
-- ft_printf --
Int type function, returns the number of characters printed to stdout (n_char_printed). Size will
differ by what is being printed after the % placeholder (string, char, number etc..).
Every function taking care of it writes the the actual output to stdout and return the siz all the way up to the ft_printf.
*/
int	ft_printf(const char *str, ...)
{
	va_list args;
	int nc_printed;
	int i;

	i = 0;
	nc_printed = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			nc_printed = nc_printed + ft_parameter_type(args, str[i + 1]);
			i++;
		}
		else
			nc_printed = nc_printed + ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (nc_printed);
	

}
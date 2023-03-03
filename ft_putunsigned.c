/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenes <sbenes@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:29:34 by sbenes            #+#    #+#             */
/*   Updated: 2023/03/03 15:03:52 by sbenes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
ft_nbrlen_unsigned - same as ft_nbrlen - to measure the lenght of num for printing. 
Negative numbers are taken care of simply by usig datatype unsigned int.
*/
int	ft_nbrlen_unsigned(int nb)
{
	int		i;

	i = 1;
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

/*
ft_putnbr_unsigned - edited putnbr function from Piscine. Using recursivity to parse and write numbers 
with "write" function. Negative numbers are taken care of simply by usig datatype unsigned int.
*/
int	ft_putnbr_unsigned(unsigned int nb)
{
	if (nb >= 10)
	{
		ft_putnbr_unsigned(nb / 10);
		ft_putnbr_unsigned(nb % 10);
	}
	else
		ft_putchar(nb + 48);
	return (ft_nbrlen_unsigned(nb));
}
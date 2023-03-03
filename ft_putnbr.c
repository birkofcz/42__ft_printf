/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenes <sbenes@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 13:39:00 by sbenes            #+#    #+#             */
/*   Updated: 2023/03/03 15:01:33 by sbenes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
ft_nbrlen - to measure the lenght of the number. Using /10 parsing of int.
*/
int	ft_nbrlen(int nb)
{
	int		i;

	i = 1;
	if (nb < 0)
	{
		nb = nb * -1;
		i++;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

/*
ft_putnbr - my putnbr function from Piscine. Using recursivity to parse and write numbers 
with "write" function. 
*/
int	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
	return (ft_nbrlen(nb));
}
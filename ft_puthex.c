/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenes <sbenes@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:41:35 by sbenes            #+#    #+#             */
/*   Updated: 2023/03/03 17:39:08 by sbenes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrlen_hex(int nb)
{
	int		i;

	i = 1;
	if (nb < 0)
	{
		nb = nb * -1;
	}
	while (nb > 15)
	{
		nb = nb / 16;
		i++;
	}
	return (i);
}

int	ft_putnbr_hex(int nb, char x)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (x == 'X')
		hex = "0123456789ABCDEF";
	
	if (nb >= 16)
		ft_putnbr_hex(nb / 16, x);
	write(1, &hex[nb % 16], 1);
	return (ft_nbrlen_hex(nb));
}


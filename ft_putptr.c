/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenes <sbenes@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:30:30 by sbenes            #+#    #+#             */
/*   Updated: 2023/03/03 15:31:11 by sbenes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Bot solution to work with
void	ft_putnbr_hex(unsigned long long n)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n >= 16)
		ft_putnbr_hex(n / 16);
	write(1, &hex[n % 16], 1);
}

void	ft_putptr(void *ptr)
{
	unsigned long long	ptr_val;

	ptr_val = (unsigned long long)ptr;
	write(1, "0x", 2);
	ft_putnbr_hex(ptr_val);
}

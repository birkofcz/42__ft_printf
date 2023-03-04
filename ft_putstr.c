/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenes <sbenes@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:20:41 by sbenes            #+#    #+#             */
/*   Updated: 2023/03/04 16:01:50 by sbenes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
DELETE UTILS BEFORE SUBMit - it is in makefile and libft
*/

/* size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
} */

// DELETE TO HERE

int	ft_putstr(const char *s)
{
	size_t i;
	if (!s)
		s = "(null)";
	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return (ft_strlen(s));
}
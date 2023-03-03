/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenes <sbenes@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:19:08 by sbenes            #+#    #+#             */
/*   Updated: 2023/03/03 15:00:13 by sbenes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h> //write and read defs
# include <stdlib.h> // malloc, free
# include <stdarg.h>
# include "./libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_crossroad(va_list args, char data_type);


/* Parameter functions */
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int nb);
int		ft_putnbr_unsigned(unsigned int nb);



//main utils - DELETE!
size_t	ft_strlen(const char *s);
int		ft_nbrlen(int nb);
int		ft_nbrlen_unsigned(int nb);




#endif
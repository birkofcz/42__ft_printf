/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenes <sbenes@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:19:08 by sbenes            #+#    #+#             */
/*   Updated: 2023/03/02 17:11:50 by sbenes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h> //write and read defs
# include <stdlib.h> // malloc, free
# include <stdarg.h>
# include "./libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_parameter_type(va_list(args), char data_type);

/* Parameter functions */
int		ft_putchar(char c);
int		ft_putstr(char *s);

//main utils - DELETE!
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);
void	ft_putchar_fd(char c, int fd);



#endif
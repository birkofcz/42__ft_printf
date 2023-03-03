/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenes <sbenes@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:29:04 by sbenes            #+#    #+#             */
/*   Updated: 2023/03/02 17:10:25 by sbenes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// test main for ft_printf
#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int nc_printed;
	char c = 'a';
	char *str = "Hello";
	char *str2 = NULL;

	printf("\033[32m"); // sets color to green
	printf(" \n--- [FT_PRINTF TESTER] --- \n");
	printf("\033[0m"); // reste color to default

	printf("\n1. [CHARACTER TEST]\nCharacter = '%c'.\n", c);
	nc_printed = ft_printf("We are ft_printfING a character:\033[32m %c \033[0m", c);
	printf("\n%d characters printed.", nc_printed);

	printf("\n\n2. [STRING TEST]\nstring = '%s'.\n", str);
	nc_printed = ft_printf("We are ft_printfING a string:\033[32m %s \033[0m", str);
	printf("\n%d characters printed.", nc_printed);
	printf("\n");
	nc_printed = ft_printf("We are ft_printfING a NULL string:\033[32m %s \033[0m", (void *)str2);
	printf("\n%d characters printed.", nc_printed);

	return (0);
}
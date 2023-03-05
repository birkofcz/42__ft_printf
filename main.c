/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenes <sbenes@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:29:04 by sbenes            #+#    #+#             */
/*   Updated: 2023/03/05 11:17:49 by sbenes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

/* TEST MAIN FOR FT_PRINTF PROJECT */
int	main(void)
{
	int nc_printed;
	
	printf("\033[35m"); // sets color to green
	printf(" \n--- [FT_PRINTF TESTER] --- \n");
	printf("\033[0m"); // reste color to default

	/*CHARACTER SET*/
	char c = 'c';
	char c1 = '0';
	char c2 = '1';

	ft_printf("\n\033[33m[character test %%c] ------\033[0m\n\n");

	nc_printed = printf("\033[34mPRINTF\033[0m char c =\033[34m %c \033[0m\n", c);
	ft_printf("%d printed.\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m char c =\033[32m %c \033[0m\n",c);
	ft_printf("%d printed.\n\n", nc_printed - 3);

	nc_printed = printf("\033[34mPRINTF\033[0m char c1 =\033[34m %c \033[0m\n", c1);
	ft_printf("%d printed.\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m char c1 =\033[32m %c \033[0m\n",c1);
	ft_printf("%d printed.\n\n", nc_printed - 3);

	nc_printed = printf("\033[34mPRINTF\033[0m char c2 =\033[34m %c \033[0m\n", c2);
	ft_printf("%d printed.\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m char c2 =\033[32m %c \033[0m\n",c2);
	ft_printf("%d printed.\n", nc_printed - 3);

	/*STRING SET*/
	char *s = "Yeeehaw! It's printing my string!";
	char *s1 = NULL;

	ft_printf("\n\033[33m[string test %%s] ------\033[0m\n\n");

	nc_printed = printf("\033[34mPRINTF\033[0m char *s =\033[34m %s \033[0m\n", s);
	ft_printf("%d printed.\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m char *s =\033[32m %s \033[0m\n",s);
	ft_printf("%d printed.\n\n", nc_printed - 3);

	nc_printed = printf("\033[34mPRINTF\033[0m char *s1 = NULL:\033[34m %s \033[0m\n", s1);
	ft_printf("%d printed.\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m char *s1 = NULL:\033[32m %s \033[0m\n",s1);
	ft_printf("%d printed.\n", nc_printed - 3);

	/*DECIMAL AND INT SET*/

	ft_printf("\n\033[33m[decimal and integer test %%d or %%i] ------\033[0m\n\n");

	nc_printed = printf("\033[34mPRINTF\033[0m int 12345 =\033[34m %d \033[0m\n", 12345);
	ft_printf("%d printed.\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m int 12345 =\033[32m %d \033[0m\n",12345);
	ft_printf("%d printed.\n", nc_printed - 3);

	nc_printed = printf("\033[34mPRINTF\033[0m int -12345\033[34m %d \033[0m\n", -12345);
	ft_printf("%d printed.\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m int -12345\033[32m %d \033[0m\n", -12345);
	ft_printf("%d printed.\n", nc_printed - 3);

	return (0);
}
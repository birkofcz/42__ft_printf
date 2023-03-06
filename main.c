/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenes <sbenes@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:29:04 by sbenes            #+#    #+#             */
/*   Updated: 2023/03/06 14:58:08 by sbenes           ###   ########.fr       */
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
	printf(" \n--- [FT_PRINTF TESTER] --- \n\n");
	printf("\033[0m"); // reset color to default

	ft_printf("\033[31mINFO: 3 extra characters with \"ft_\" taken into account. Substracted from the characters printed.\033[0m\n");

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

	nc_printed = printf("\033[34mPRINTF\033[0m %%i 12345 =\033[34m %i \033[0m\n", 12345);
	ft_printf("%d printed.\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m %%i 12345 =\033[32m %i \033[0m\n",12345);
	ft_printf("%d printed.\n\n", nc_printed - 3);

	nc_printed = printf("\033[34mPRINTF\033[0m %%d -12345 =\033[34m %d \033[0m\n", -12345);
	ft_printf("%d printed.\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m %%d -12345 =\033[32m %d \033[0m\n", -12345);
	ft_printf("%d printed.\n\n", nc_printed - 3);

	nc_printed = printf("\033[34mPRINTF\033[0m %%d INT_MAX =\033[34m %d \033[0m\n", INT_MAX);
	ft_printf("%d printed.\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m %%d INT_MAX =\033[32m %d \033[0m\n", INT_MAX);
	ft_printf("%d printed.\n\n", nc_printed - 3);

	nc_printed = printf("\033[34mPRINTF\033[0m %%i INT_MIN =\033[34m %i \033[0m\n", INT_MIN);
	ft_printf("%d printed.\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m %%i INT_MIN =\033[32m %i \033[0m\n", INT_MIN);
	ft_printf("%d printed.\n", nc_printed - 3);

	/*POINTER SET*/
	int x = 1;
	char ch = 'x';

	int *ptr1 = &x;
	char *ptr2 = &ch;
	char *ptr3 = "Hello";
	char *ptr4 = NULL;

	ft_printf("\n\033[33m[pointer test %%p] ------\033[0m\n\n");

	nc_printed = printf("\033[34mPRINTF\033[0m int ptr =\033[34m %p \033[0m\n", ptr1);
	ft_printf("%d printed.\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m int ptr =\033[32m %p \033[0m\n", ptr1);
	ft_printf("%d printed.\n\n", nc_printed - 3);

	nc_printed = printf("\033[34mPRINTF\033[0m character ptr =\033[34m %p \033[0m\n", ptr2);
	ft_printf("%d printed.\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m character ptr =\033[32m %p \033[0m\n", ptr2);
	ft_printf("%d printed.\n\n", nc_printed - 3);

	nc_printed = printf("\033[34mPRINTF\033[0m string ptr =\033[34m %p \033[0m\n", ptr3);
	ft_printf("%d printed.\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m string ptr =\033[32m %p \033[0m\n", ptr3);
	ft_printf("%d printed.\n\n", nc_printed - 3);

	nc_printed = printf("\033[34mPRINTF\033[0m NULL ptr =\033[34m %p \033[0m\n", ptr4);
	ft_printf("%d printed.\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m NULL ptr =\033[32m %p \033[0m\n", ptr4);
	ft_printf("%d printed.\n", nc_printed - 3);

	/*UNSIGNED SET*/

	ft_printf("\n\033[33m[unsigned test %%u] ------\033[0m\n\n");

	nc_printed = printf("\033[34mPRINTF\033[0m unsigned int 1 =\033[34m %u \033[0m\n", 1);
	ft_printf("%d printed.\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m unsigned int 1 =\033[32m %u \033[0m\n", 1);
	ft_printf("%d printed.\n\n", nc_printed - 3);

	nc_printed = printf("\033[34mPRINTF\033[0m unsigned int -1 =\033[34m %u \033[0m\n", -1);
	ft_printf("%d printed.\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m unsigned int -1 =\033[32m %u \033[0m\n", -1);
	ft_printf("%d printed.\n\n", nc_printed - 3);

	nc_printed = printf("\033[34mPRINTF\033[0m UINT_MAX =\033[34m %u \033[0m\n", UINT_MAX);
	ft_printf("%d printed.\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m UINT_MAX =\033[32m %u \033[0m\n", UINT_MAX);
	ft_printf("%d printed.\n\n", nc_printed - 3);

	/*HEXADECIMAL SET*/

	ft_printf("\n\033[33m[hexadecimal test %%x or %%X] ------\033[0m\n\n");

	nc_printed = printf("\033[34mPRINTF\033[0m unsigned int 42 =\033[34m %x \033[0m\n", 42);
	ft_printf("%d printed.\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m unsigned int 42 =\033[32m %x \033[0m\n", 42);
	ft_printf("%d printed.\n\n", nc_printed - 3);

	nc_printed = printf("\033[34mPRINTF\033[0m unsigned int -11 =\033[34m %x \033[0m\n", -11);
	ft_printf("%d printed.\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m unsigned int -11 =\033[32m %x \033[0m\n", -11);
	ft_printf("%d printed.\n\n", nc_printed - 3);

	nc_printed = printf("\033[34mPRINTF\033[0m UINT_MAX =\033[34m %X \033[0m\n", UINT_MAX);
	ft_printf("%d printed.\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m UINT_MAX =\033[32m %X \033[0m\n", UINT_MAX);
	ft_printf("%d printed.\n\n", nc_printed - 3);

	/*COMBINATION SET*/
	char *name = "John The Coder";
	int age = 42;
	char character = 'i';
	char *pointer_to_p = &character;

	ft_printf("\n\033[33m[combination test] ------\033[0m\n\n");

	nc_printed = printf("\033[34mPRINTF\033[0m = Hi! My name is\033[34m %s\033[0m. I'm\033[34m %i \033[0mand I like character\033[34m \"%c\"\033[0m. All the iteration memories! Here is a pointer to it:\033[34m %p\033[0m. Also, there is currently -10 outside. I don't do decimal. I do hex, so there is actually\033[34m %x \033[0moutside. Want it with big letters? There you go:\033[34m %X \033[0m! Might be better to measure it in unsigned int. Now its\033[34m %u\033[0m. Much better! Summer vibe, baby!\n", name, age, character, pointer_to_p, -10, -10, -10);
	ft_printf("%d printed.\n\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m = Hi! My name is\033[32m %s\033[0m. I'm\033[32m %i \033[0mand I like character\033[32m \"%c\"\033[0m. All the iteration memories! Here is a pointer to it:\033[32m %p\033[0m. Also, there is currently -10 outside. I don't do decimal. I do hex, so there is actually\033[32m %x \033[0moutside. Want it with big letters? There you go:\033[32m %X \033[0m! Might be better to measure it in unsigned int. Now its\033[32m %u\033[0m. Much better! Summer vibe, baby!\n", name, age, character, pointer_to_p, -10, -10, -10);
	ft_printf("%d printed.\n\n", nc_printed - 3);

	

	ft_printf("\033[35m"); // sets color to green
	ft_printf(" \n--- [END] --- \n\n");
	ft_printf("\033[0m"); // reset color to default

	return (0);
}

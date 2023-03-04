/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenes <sbenes@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:29:04 by sbenes            #+#    #+#             */
/*   Updated: 2023/03/04 13:47:44 by sbenes           ###   ########.fr       */
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
	int pos = 12345;
	int neg = -12345;
	int intmin = -2147483648;
	int intmax = 2147483647;
	int zero = 0;
	unsigned int upos = 12345;
	unsigned int uneg = -12345;
	unsigned int uintmin = -2147483648;
	unsigned int uintmax = 2147483647;
	unsigned int uzero = 0;


	printf("\033[32m"); // sets color to green
	printf(" \n--- [FT_PRINTF TESTER] --- \n");
	printf("\033[0m"); // reste color to default

	printf("\n1. [CHARACTER TEST %%c]\nCharacter = '%c'.\n", c);
	nc_printed = ft_printf("We are ft_printfING a character:\033[32m %c \033[0m", c);
	printf("\n%d characters printed.", nc_printed);

	printf("\n\n2. [STRING TEST %%s]\nstring = '%s'.\n", str);
	nc_printed = ft_printf("We are ft_printfING a string:\033[32m %s \033[0m", str);
	printf("\n%d characters printed.", nc_printed);
	printf("\n");
	nc_printed = ft_printf("We are ft_printfING a NULL string:\033[32m %s \033[0m", (void *)str2);
	printf("\n%d characters printed.", nc_printed);

	printf("\n\n3. [INT AND DECIMAL TEST %%i OR %%d]\nint pos = %i.\nint neg = %i\nint zero = %i\nint intmin = %i\nint inmax = %i\n", pos, neg, zero, intmin, intmax);
	nc_printed = ft_printf("We are ft_printfING a int pos:\033[32m %i \033[0m", pos);
	printf("\n%d characters printed.\n", nc_printed);
	nc_printed = ft_printf("We are ft_printfING a int neg:\033[32m %i \033[0m", neg);
	printf("\n%d characters printed.\n", nc_printed);
	nc_printed = ft_printf("We are ft_printfING a int zero:\033[32m %i \033[0m", zero);
	printf("\n%d characters printed.\n", nc_printed);
	nc_printed = ft_printf("We are ft_printfING a int intmin:\033[32m %i \033[0m", intmin);
	printf("\n%d characters printed.\n", nc_printed);
	nc_printed = ft_printf("We are ft_printfING a int intmax:\033[32m %i \033[0m", intmax);
	printf("\n%d characters printed.", nc_printed);

	printf("\n\n4. [UNSIGNED DECIMAL TEST %%u]\nuint upos = %i.\nuint uneg = %i\nuint uzero = %i\nuint uintmin = %i\nuint uintmax = %i\n", pos, neg, zero, intmin, intmax);
	
	nc_printed = printf("\n\033[34mPRINTF\033[0m int pos:\033[34m %u \033[0m", upos);
	//printf("\n%d characters printed.\n", nc_printed);
	nc_printed = ft_printf("\n\033[32mFT_PRINTF\033[0m int pos:\033[32m %u \033[0m", upos);
	//printf("\n%d characters printed.\n", nc_printed);
	
	nc_printed = printf("\n\033[34mPRINTF\033[0m int neg:\033[34m %u \033[0m", uneg);
	printf("\n%d characters printed.\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m int neg:\033[32m %u \033[0m", uneg);
	printf("\n%d characters printed.\n", nc_printed);

	nc_printed = printf("\033[34mPRINTF\033[0m int zero:\033[34m %u \033[0m", uzero);
	printf("\n%d characters printed.\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m int zero:\033[32m %u \033[0m", uzero);
	printf("\n%d characters printed.\n", nc_printed);

	nc_printed = printf("\033[34mPRINTF\033[0m int intmin:\033[34m %u \033[0m", uintmin);
	printf("\n%d characters printed.\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m int intmin:\033[32m %u \033[0m", uintmin);
	printf("\n%d characters printed.\n", nc_printed);

	nc_printed = printf("\033[34mPRINTF\033[0m int intmax:\033[34m %u \033[0m", uintmax);
	printf("\n%d characters printed.\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m int intmax:\033[32m %u \033[0m", uintmax);
	printf("\n%d characters printed.\n", nc_printed);

	printf("\n\n5. [POINTER TEST %%p]");
	int a = 5;
	char ch = 'c';
	char *str3 = "Hello";

	int *ptr1 = &a;
	char *ptr2 = &ch;
	char *ptr3 = str3;
	char *ptr4 = NULL;

	nc_printed = printf("\n\033[34mPRINTF\033[0m pointer int a:\033[34m %p \033[0m", ptr1);
	//printf("\n%d characters printed.\n", nc_printed);
	nc_printed = ft_printf("\n\033[32mFT_PRINTF\033[0m pointer int a:\033[32m %p \033[0m",ptr1);
	//printf("\n%d characters printed.\n", nc_printed);
	
	nc_printed = printf("\n\033[34mPRINTF\033[0m pointer char ch:\033[34m %p \033[0m", ptr2);
	printf("\n%d characters printed.\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m pointer char ch:\033[32m %p \033[0m", ptr2);
	printf("\n%d characters printed.\n", nc_printed);

	nc_printed = printf("\033[34mPRINTF\033[0m pointer char *str3:\033[34m %p \033[0m", ptr3);
	printf("\n%d characters printed.\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m pointer char *str3:\033[32m %p \033[0m", ptr3);
	printf("\n%d characters printed.\n", nc_printed);

	nc_printed = printf("\033[34mPRINTF\033[0m pointer char *str3:\033[34m %p \033[0m", ptr4);
	printf("\n%d characters printed.\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m pointer char *str3:\033[32m %p \033[0m", ptr4);
	printf("\n%d characters printed.\n", nc_printed);

	printf("\n\n6. [HEXADECIMAL TEST %%x or %%X]");
	int hex = 1;
	int hex2 = 0;
	int hex3 = -1;
	char hex4 = 'c';
	/* int intmin = -2147483648;
	int intmax = 2147483647; */
	//char *hex5 = "Hello";


	nc_printed = printf("\n\033[34mPRINTF\033[0m int hex:\033[34m %x \033[0m", hex);
	//printf("\n%d characters printed.\n", nc_printed);
	nc_printed = ft_printf("\n\033[32mFT_PRINTF\033[0m int hex:\033[32m %x \033[0m",hex);
	//printf("\n%d characters printed.\n", nc_printed);
	
	nc_printed = printf("\n\033[34mPRINTF\033[0m int hex2:\033[34m %X \033[0m", hex2);
	printf("\n%d characters printed.\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m int hex 2:\033[32m %X \033[0m", hex2);
	printf("\n%d characters printed.\n", nc_printed);

	nc_printed = printf("\033[34mPRINTF\033[0m int hex 3:\033[34m %X \033[0m", hex3);
	printf("\n%d characters printed.\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m int hex 3:\033[32m %X \033[0m", hex3);
	printf("\n%d characters printed.\n", nc_printed);

	nc_printed = printf("\033[34mPRINTF\033[0m char hex4:\033[34m %X \033[0m", hex4);
	printf("\n%d characters printed.\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m char hex4:\033[32m %X \033[0m", hex4);
	printf("\n%d characters printed.\n", nc_printed);

	nc_printed = printf("\033[34mPRINTF\033[0m int intmin:\033[34m %X \033[0m", intmin);
	printf("\n%d characters printed.\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m int intmin:\033[32m %X \033[0m", intmin);
	printf("\n%d characters printed.\n", nc_printed); 

	nc_printed = printf("\033[34mPRINTF\033[0m int intmax:\033[34m %X \033[0m", intmax);
	printf("\n%d characters printed.\n", nc_printed);
	nc_printed = ft_printf("\033[32mFT_PRINTF\033[0m int intmax:\033[32m %X \033[0m", intmax);
	printf("\n%d characters printed.\n", nc_printed); 
	
	return (0);
}
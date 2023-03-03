/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vaargsexample.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenes <sbenes@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:34:35 by sbenes            #+#    #+#             */
/*   Updated: 2023/03/02 14:33:50 by sbenes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
To get a grip on variadic functions
*/

#include <stdio.h>
#include <stdarg.h>

/*
-- Sum function with fixed number of arguments -- 
*/
int	fixed_sum(int a, int b, int c)
{
	int result;

	result = a + b + c;
	return (result);
}


/*
-- Sum function as biotic function using va_args --

datatype	function_name(int number_of_arguments, ...);

va_list - typedef - type defined an name defined
|
va_start - macro to start the traverse through the arguments (args, num_of_args)
|
Some loop, in this case, it loops through the arguments with num_of_args, updating the result for each iteration
va_arg - macro to go to the next argument(args, datatype)
|
end to the va_list traverse(args)
|
Return result
*/
int	varuiadic_sum(int num_of_args, ...)
{
	va_list args;
	va_start(args, num_of_args);

	int i = 0;
	int result = 0;
	while (i < num_of_args)
	{
		int x = va_arg(args, int); //processing the arguments one by one. When told to process more than there are = undefined behaviour
		result = result + x;
		i++;
	}
	va_end(args);
	return (result);
}

int	main(int argc, char *argv[])
{
	printf("Sum is %d\n", fixed_sum(1, 2, 3));
	printf("Sum is %d\n", variadic_sum(4, 1, 2, 3, 4));
	return (0);
}
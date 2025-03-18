/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/01 15:15:42 by pavidal       #+#    #+#                 */
/*   Updated: 2024/12/07 12:38:14 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "includes/libft.h"

static int	myparsing(const char *input, unsigned int i, va_list dynamic_args);

int	ft_printf(const char *input, ...)
{
	va_list			dynamic_args;
	unsigned int	i;
	unsigned int	bytes_num;

	i = 0;
	bytes_num = 0;
	va_start(dynamic_args, input);
	while (input[i] != '\0')
	{
		if (input[i] == '%')
		{
			i++;
			bytes_num += myparsing(input, i, dynamic_args);
		}
		else
		{
			bytes_num += printfchar(input[i]);
		}
		i++;
	}
	va_end(dynamic_args);
	return (bytes_num);
}

static int	myparsing(const char *input, unsigned int i, va_list dynamic_args)
{
	if (input[i] == 'c')
		return (printfchar(va_arg(dynamic_args, int)));
	else if (input[i] == 's')
		return (printfstr(va_arg(dynamic_args, char *)));
	else if (input[i] == 'p')
		return (printfptr(va_arg(dynamic_args, uintptr_t)));
	else if (input[i] == 'd' || input[i] == 'i')
		return (nbr_base(va_arg(dynamic_args, int), 10, "0123456789"));
	else if (input[i] == 'u')
		return (nbr_base(va_arg(dynamic_args, unsigned int), 10, "0123456789"));
	else if (input[i] == 'x')
		return (nbr_base(va_arg (dynamic_args, unsigned int), 16, "0123456789abcdef"));
	else if (input[i] == 'X')
		return (nbr_base(va_arg(dynamic_args, unsigned int), \
		16, "0123456789ABCDEF"));
	else if (input[i] == '%')
		return (printfchar('%'));
	else
		return (0);
}

//Logic of PRINTF ////
//1. Parse the format string to identify format specifiers.
// When my index finds a %, it will look at the element in the next index.
//that is the character that defines the data type (c, s,) of 1st var arg
//2. Extract the corresponding argument and convert it to a string.
//of the 1st variable argument, and then call a method on the dynamic arg?
//3. Output the formatted result to the standard output.
//
// variadic function = accepts 1 MANDATORY arg + a variable num of arguments.
// IN PRINTF: Mandatory is the string we pass, BUT we don't know
//how many times the format specifier will be used.
// flags | width | precision
//external functions:
// -malloc, free, write,
//What the int of printf returns? no of bytes of data written to the console
// - include the "stdarg" library, it will allow you to use :
// va_list = list that contains all dynamic arguments aka
// object type suitable for holding the info needed by the 3 macros
// va_start ( va_list var, parameterN ); - initializes
// here my paramterN is the precedent arg to the first dyn arg
// va_arg - only macro with return value: current arg.
// va_end - frees memory.
// The printf function will write each character of the intial string,
//one by one, until it finds a %.
//PARSING LOGIC:
// why unsigned int
//
// you have to implement the following conversions:
// • %c Prints a single character.
// • %s Prints a string (as defined by the common C convention).
// • %p The void * pointer argument has to be printed in hexadecimal format.
// • %d Prints a decimal (base 10) number.
// • %i Prints an integer in base 10.
// • %u Prints an unsigned decimal (base 10) number.
// • %x Prints a number in hexadecimal (base 16) lowercase format.
// • %X Prints a number in hexadecimal (base 16) uppercase format.
// • %% Prints a percent sign.
// little bit of data types
// short = 16 bits
// int = 32 bits
// long = 64 bits
// long long  = always takes 8 bytes, even in 32bits systems.
// int main (void)
// {
// 	ft_printf("%p\n", LONG_MIN);
// 	printf("%p", (void *)LONG_MIN);
// 	return (0);
// }
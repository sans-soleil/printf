/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printfptr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/03 19:52:53 by pavidal       #+#    #+#                 */
/*   Updated: 2024/12/07 12:00:55 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "includes/libft.h"

int	ptr_base(uintptr_t ptr, unsigned long base, char *base_digits);

int	printfptr(uintptr_t ptr)
{
	int			count;

	if (!ptr)
		return (write (1, "(nil)", 5));
	if (write(1, "0x", 2) == -1)
		return (-1);
	count = ptr_base(ptr, 16, "0123456789abcdef");
	if (count == -1)
		return (-1);
	return (count + 2);
}

int	ptr_base(uintptr_t ptr, unsigned long base, char *base_digits)
{
	int	count;

	//fd = open("somefile.txt"); 4 ---- 1000
	count = 0;
	if (ptr >= base)
		count += ptr_base(ptr / base, base, base_digits);
	if (write(1, &base_digits[ptr % base], 1) == -1)
		return (-1);
	return (count + 1);
}
// int main (void)
// {
// 	char *ptr = malloc(sizeof(char));
// 	printf("%p", 0);
// 	return (0);
// }
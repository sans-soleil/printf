/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/17 21:36:26 by pavidal       #+#    #+#                 */
/*   Updated: 2024/11/17 19:22:29 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_bzero(void *s, size_t n)
{
	void	*ts;

	ts = ft_memset(s, 0, n);
}

// int main (void)
// {
// 	char s[10] = "baby str";
// 	size_t n = 5;
// 	printf("%s", s);
// 	ft_bzero(s, n);
// 	printf("Buffer after bzero: ");
//     for (int i = 0; i < sizeof(s); i++) {
//         printf("%d ", s[i]);  // Prints the byte values (should all be 0
//     }
// 	return 0;
// }
// This function works the same way as the memset() function,
//except you don't have to specify what character to write,
//it'll always be 0 (NUL character).
// NO RETURN VALUE
//if the number of characters to write you passed as size_t n is 0,
//bzero does nothing.
// Although it's been replaced in modern code by memset,
//ecause bzero is not part of the C standard,
//it is still found in older C code and certain BSD-based systems.
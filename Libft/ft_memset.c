/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/08 16:29:42 by pavidal       #+#    #+#                 */
/*   Updated: 2024/11/17 19:23:30 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp_s;

	tmp_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		tmp_s[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int main (void)
// {

// 	char s [] = "Hello";
// 	int c = '*';
// 	size_t n = 7;
// 	printf("%s", s);
// 	ft_memset (s, c, n);
// 	int i = 0;
// 	printf("%s", s);
// }
// fills the first n bytes of the memory area pointed to by s
//with the constant byte c.
//works directly on memory, treating it as a contiguous block of bytes.
//commonly used to initialize or reset arrays, structs, or other memory buffers.
// RETURN VALUE
//        a pointer to the memory area s.
// we need to convert the input pointer s to unsigned char to work byte by byte
// The parameter c is passed as an int,
//but it represents a single byte value that will be used to fill the memory.
//We cast c to unsigned char to ensure that it is treated as a single byte.
//Even if c = larger integer, only the least significant byte of c will be used
//(e.g., if c = 256, only the 0 byte would be used since
//256 is represented as 0x00 0x01 in memory, so the first byte is 0).
//The loop runs n times, filling each byte
//of the memory block with the value (unsigned char)c.
//// Initialize buffer using our custom memset function
//     memset(buffer, '*', 5);  // Fill first 5 bytes with '*',
//rest are uninitialized
//     // Print the resulting memory
//     for (int i = 0; i < 10; i++) {
//         printf("%c ", buffer[i]);
//     }
//     return 0;
// }
// result *****
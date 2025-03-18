/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/16 12:30:59 by pavidal       #+#    #+#                 */
/*   Updated: 2024/11/17 19:24:33 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (size > 0)
	{
		if (src_len < size - 1)
			ft_memcpy(dst, src, src_len + 1);
		else
		{
			ft_memcpy(dst, src, size - 1);
			dst[size - 1] = '\0';
		}
	}
	return (src_len);
}

// int main (void)
// {
// 	const char* src = "This is SRC";
// 	char dst [];
// 	printf("%zu\n", strlcpy(dst, src, sizeof(dst)));
// 	printf("%zu\n", ft_strlcpy(dst, src, sizeof(dst)));
// 	return (0);
// }
// here is a better test
// void test(int size) {
//     char string[] = "Hello there, Venus";
//     char buffer[20] = "xxxxxxxxxxxxxxxxxxx";
//     int r = strlcpy(dst, string, size);
//     int len = strlen(dst);
//     printf("Source: '%s', size: %d, buffer: '%s', len: %d, result: %d\n",
//            string, size, buffer, len, r);
// }
// int main() {
//     test(19);
//     test(10);
//     test(1);
//     test(0);
//     return 0;
// }
// return the total length of the string they tried to create.
//For strlcpy() that means the length of src.
//copies up to size - 1 characters from the NUL-terminated string src to dst,
//NUL-terminating the result.
/*take the full size of the buffer (space allocated in temporary memory)
//(not just the length) and guarantee to NUL terminate
conditions:
- size > 0
- there must be 1 byte free in dst
-only operates in true c str
to run this one i need a flag -lbsd
*/
// there is NO way for strcpy to know how long is the source str. 
//that is why we have strncpy.
//strncpy limits the number of characters to be copied. call 
//the function with (str1, str2. sizeof(str1)) 
//or safer call (str1, str2, sizeof(str1) - 1)
// strcpy will keep going until null termination independently of the capacity 
//of dst
// caveat. if str2 is equal or greater than str1 
//then it will leave str1 without null terminator.
// this causes undefined behaviour.
//which one i fail?
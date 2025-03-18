/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/17 22:03:58 by pavidal       #+#    #+#                 */
/*   Updated: 2024/11/17 19:23:25 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

unsigned char	*overlap(unsigned char *td, unsigned const char *ts, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*tdest;
	unsigned const char	*tsrc;

	tdest = (unsigned char *)dest;
	tsrc = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	tdest = overlap(tdest, tsrc, n);
	return (tdest);
}

unsigned char	*overlap(unsigned char *td, unsigned const char *ts, size_t n)
{
	size_t	i;

	i = n;
	if (td > ts && n + ts > td)
	{
		while (i > 0)
		{
			td[i - 1] = ts[i - 1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			td[i] = ts[i];
			i++;
		}
	}
	return (td);
}
// int main (void)
// {
//     char src[] = "Hello, Fresquita!";
//     // Copy part of the buffer to an overlapping region
//within the same buffer
//     memmove(src + 7, src, 2);  // Copy "Hello"
//to the position starting at dest[7]
//     printf("Resulting buffer: %s\n", src);
//     return 0;
// }
//same than memcpy, except that avoids overlapping!\
//example, copying a substring of a string to another 
//part of the same string would be problematic with memcpy 
//but works safely with memmove.
//Handling Overlap:
//     The key part of memmove is how it handles overlapping regions.
//     Forward Copying: If the destination 
//is located before the source in memory (d < s),
//we can safely copy bytes from the start to the end.
//     Backward Copying: If the destination is after the source (d > s)
// we need to copy bytes 
//from the end of the source to the end of the destination
//to avoid overwriting the data that we still need to copy.
// Return the Destination Pointer:
// After the copying is complete, the function returns 
//the original dest pointer, 
//which is useful if the function is used 
//in assignment or chained function calls.
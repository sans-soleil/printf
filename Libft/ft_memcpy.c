/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/17 19:49:21 by pavidal       #+#    #+#                 */
/*   Updated: 2024/11/17 19:23:20 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*tdst;
	const unsigned char	*tsrc;

	if (!dst && !src)
		return (NULL);
	i = 0;
	tdst = (unsigned char *)dst;
	tsrc = (unsigned char *)src;
	while (i < n)
	{
		tdst[i] = tsrc[i];
		i++;
	}
	return (dst);
}

// int main (void)
// {
// 	char dst [] = "Hello WOrld";
// 	const char *src = "HA";
// 	printf("%s\n", dst);
// 	ft_memcpy (dst, src, 2);
// 	printf("%s", dst);
// }
// WORKING GOOD!
//The memcpy function copies maximum n bytes from src to dst,
//if src and dst are NULL, it returns dst.
//memcpy is used to copy a block of memory from one location to another.
//It copies data from a source memory address to a destination memory address.
//It does not allocate memory for you;
//it assumes the destination memory is already allocated
//and large enough to hold the data being copied
//This functions works like the strcpy function,
//except that void * as parameters, so we can give it any
//type of pointer we want to copy.
// we also need to specify numbers of bytes whereas strcpy uses
//null terminator to assess this!
//Cast src and dst to char pointers because we want to work byte by byte
//the source and destination memory regions do not overlap.
//If they do overlap, memcpy may cause undefined behavior.
//For overlapping memory regions, you would typically use memmove instead.

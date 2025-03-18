/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/16 14:21:01 by pavidal       #+#    #+#                 */
/*   Updated: 2024/11/17 19:24:24 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	available_space;

	dst_len = (ft_strlen(dst));
	src_len = (ft_strlen(src));
	if (!dst || !src)
		return (0);
	if (size <= dst_len)
		return (size + src_len);
	available_space = size - dst_len -1;
	if (available_space > 0)
	{
		if (src_len < available_space)
			ft_memcpy(dst + dst_len, src, src_len + 1);
		else
		{
			ft_memcpy(dst + dst_len, src, available_space);
			dst[dst_len + available_space] = '\0';
		}
	}
	return (dst_len + src_len);
}

// returns the total length of the string they try to create.
//hat means the initial length of dst plus the length of src
// * get the original length of src */
//     /* get the original length of dst */
//     /* if the length of dst is equal to size */
//     /* simply return the the length of dst + the length of src */
//     /* if dst_len is big enough to accomodate both src and dst */
//     /* concatenate src at the end of dst */
//     /* else, concatenate dstsize character maximum */
//  return (/* length of src + length of dst */);
// int main (void)
// {
// 	const char *src = "This is SRC";
// 	char *dst = "haaaaa";
// 	//printf("%s: %zu\n", src, strlcat(dst, src, sizeof(dst)));
// 	printf("%s: %zu\n", dst, ft_strlcat(dst, src, sizeof(dst)));
// 	return (0);
// 	char dest[10] = "a";
//     printf("%zu:", ft_strlcat(dest, "lorem ipsum dolor sit amet", 1));
// 	//printf("%zu:", strlcat(dest, "lorem ipsum dolor sit amet", 1));
// 	return (0);
// }
// int main (void)
// {
// 	const char src[2] = {'i', 'e'};
// 	char dst[8] = "haaaaa";
// 	printf("%s: %zu\n", src, strlcat(dst, src, 11));
// 	printf("%s: %zu\n", dst, ft_strlcat(dst, src, 11));
// 	return (0);
// char dest[10] = "a";
// printf("%zu:", ft_strlcat(dest, "lorem ipsum dolor sit amet", 1));
// //printf("%zu:", strlcat(dest, "lorem ipsum dolor sit amet", 1));
// return (0);
//}
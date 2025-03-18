/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/17 22:20:01 by pavidal       #+#    #+#                 */
/*   Updated: 2024/11/17 19:23:09 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ts;
	unsigned char	tc;
	size_t			i;

	ts = (unsigned char *)s;
	tc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ts[i] == tc)
			return ((void *)ts + i);
		i++;
	}
	return (NULL);
}

// int main (void)
// {
// 	const char s[]="Helloo FRESH";
// 	int c = 'l';
// 	size_t n = 4;
// 	printf("%s\n", memchr(s, c, n));
// 	printf("%s", ft_memchr (s, c, n));
// 	return 0;
// }
// The memchr function is used to search for a specific byte value
// within the first n bytes of a block of memory.
// If the byte is found,
//it returns a pointer to the first occurrence of the byte;
//otherwise, it returns NULL.
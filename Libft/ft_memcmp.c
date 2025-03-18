/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/18 20:20:33 by pavidal       #+#    #+#                 */
/*   Updated: 2024/11/17 19:23:16 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ts1;
	unsigned char	*ts2;
	size_t			i;

	ts1 = (unsigned char *)s1;
	ts2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (ts1[i] != ts2[i])
			return (ts1[i] - ts2[i]);
		i++;
	}
	return (0);
}

// int main (void)
// {
// 	const char s1[]= "aalut";
// 	const char s2[]= "calut";
// 	size_t n = 5;
// 	printf("%d", memcmp(s1, s2, n));
// 	printf("%d", ft_memcmp(s1, s2, n));
// 	return (0);
//compares the first n bytes (each interpreted as unsigned char)
//of the memory areas s1 and s2.
//n therefore is the assumed length of both strings.
//The return value depends on what difference is found.
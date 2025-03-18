/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/11 23:42:56 by pavidal       #+#    #+#                 */
/*   Updated: 2024/11/17 19:24:52 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main (void)
// {
// 	const char s1 [] = "Hi gurl";
// 	const char s2 [] = "my brian hurts";
// 	printf("%d vs %d", ft_strncmp(s1, s2, 2), strncmp(s1, s2, 2));
// 	return (0);
// }

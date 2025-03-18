/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/08 16:58:45 by pavidal       #+#    #+#                 */
/*   Updated: 2024/11/17 19:24:03 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main (void)
// {
// 	const char *str = "I am really calm";
//     char ch = 'z';
//     printf("my function: %s\n", ft_strchr(str, ch));
// 	printf("original function: %s\n", strchr(str, ch));
//     char d = 'y';
// 	printf("my function: %s\n", ft_strchr(str, d));
// 	printf("original function: %s\n", strchr(str, d));
//     return (0);
// }
// The strchr() function returns a pointer to the first occurrence 
//of the character c in the string s.
// RETURN VALUE : A pointer to the first occurence of c in str.
// NULL if c is not found.

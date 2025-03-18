/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/18 21:45:56 by pavidal       #+#    #+#                 */
/*   Updated: 2024/11/17 19:25:09 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
	{
		return ((char *)big);
	}
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (i + j < len && big[i + j] == little[j] && little[j] != '\0')
		{
			j++;
		}
		if (little[j] == '\0')
		{
			return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}

// int main (void)
// {
// 	const char s1 []="hellofresh";
// 	const char s2 []="fre";
// 	size_t len = 8;
// 	printf("%s", ft_strnstr(s1, s2, len));
// 	printf("%s", strnstr(s1, s2, len));
// }
//The strnstr() function locates the first occurrence of little in big
// where not more than len characters are searched.
//Characters that appear after a ‘\0’ character are not searched.
//If little is an empty string, big is returned;
//if little occurs nowhere in big, NULL is returned;
// otherwise a pointer to the first character of the first occurrence
//of little is returned.
//if (little[j] == '\0'): This checks if you've reached
//the end of the little string,
//indicating that you've found a match in big.
//return (char *)(big + i);: This returns
//a pointer to the first occurrence of the
// matching substring in big.
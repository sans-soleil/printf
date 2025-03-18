/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/11 23:27:37 by pavidal       #+#    #+#                 */
/*   Updated: 2024/11/17 19:25:16 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	tc;

	i = 0;
	tc = (unsigned char)c;
	while (s[i] != '\0')
	{
		i++;
	}
	if (tc == '\0')
		return ((char *)&s[i]);
	while (i >= 0)
	{
		if (s[i] == tc)
		{
			return ((char *)(s + i));
		}
		i--;
	}
	return (NULL);
}
// #include<stdio.h>
// #include<string.h>
// int main (void)
// {
// 	char str[]="HAlleAeeo";
// 	int c = 65;
// 	printf("%s VS %s", ft_strrchr(str, c), strrchr(str, c));
// }
// the strrchr() f returns a pointer to the last occurrence of the char c
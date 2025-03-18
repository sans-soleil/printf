/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/21 22:37:50 by pavidal       #+#    #+#                 */
/*   Updated: 2024/11/17 19:25:27 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static char	*ft_malloc_empty(void)
{
	char	*dest;

	dest = (char *)malloc(sizeof(char) * 1);
	if (dest != NULL)
		dest[0] = '\0';
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	slen;
	size_t	i;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start > slen)
		return (ft_malloc_empty());
	if (len >= slen - start)
		len = slen - start;
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < len && s[i + start] != '\0')
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char test1[17] = "Testing1234567890";
// 	char *test_result;
// 	test_result = ft_substr(test1, 5, 5);
// 	printf("%s", test_result);  //ng123
// 	return (0);
// }
//char	*ft_substr(char *s, unsigned int start, size_t len)
//{
//	size_t	i;
//	char	*str;
//
//	if (!s)
//		return (NULL);
//	if (start > ft_strlen(s))
//		return (malloc(1));
//	if (len > ft_strlen(s + start))
//		len = ft_strlen(s + start);
//	str = malloc((len + 1) * sizeof(char));
//	if (!str)
//		return (NULL);
//	i = 0;
//	while (i < len)
//	{
//		str[i] = s[start + i];
//		i++;
//	}
//	str[i] = 0;
//	return (str);
//}


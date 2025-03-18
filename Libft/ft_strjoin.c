/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/22 16:57:51 by pavidal       #+#    #+#                 */
/*   Updated: 2024/11/17 19:24:19 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*dst;
	size_t	size;

	size = ft_strlen(s1) + (ft_strlen(s2) + 1);
	dst = (char *)malloc(size * sizeof(char));
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, s1, size);
	ft_strlcat(dst, s2, size);
	return (dst);
}

// int main (void)
// {
// 	const char s1[] = "hola ";
// 	const char s2[] = "quieres hijos?";
// 	printf("%s: ", ft_strjoin(s1, s2));
// 	return (0);
// }
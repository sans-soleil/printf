/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/22 17:47:20 by pavidal       #+#    #+#                 */
/*   Updated: 2024/11/17 19:24:46 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dst;

	i = 0;
	dst = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	while (s[i] != '\0')
	{
		dst[i] = (f)(i, s[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

// char	to_lower_every_odd(unsigned int i, char c)
// {
// 	if (i % 2 == 1)
// 		return (ft_tolower(c));
// 	return (c);
// }

// int main (void)
// {
// 	const char s[] = "PAPAGAYO";
// 	int i = 0;
// 	char *result = ft_strmapi(s, &to_lower_every_odd);
// 	printf("%s", result);
// 	free(result);
// 	return(0);
// }
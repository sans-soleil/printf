/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/23 16:49:54 by pavidal       #+#    #+#                 */
/*   Updated: 2024/11/17 19:27:22 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	match_making(char c, const char *set);

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1);
	if (!s1)
		return (ft_strdup(""));
	if (!set)
		return (ft_strdup(s1));
	while (s1[start] && match_making(s1[start], set))
		start++;
	while (end > start && match_making(s1[end - 1], set))
		end--;
	if (start >= end)
		return (ft_strdup(""));
	return (ft_substr(s1, start, end - start));
}

int	match_making(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}
// #include <stdio.h>
// int main(void)
// {
// 	char *r = ft_strtrim(" t t  g  ", " t");
// 	printf("'%s'\n", r);
// 	free(r);
// }
//     ft_strtrim -- trims character set from string
// SYNOPSIS
//     char *ft_strtrim(const char *s1, const char *set);
// DESCRIPTION
//     Allocate (with malloc(3)) and returns a copy of s1, without the
//characters specified in set at the beginning and the end of s1.
// PARAMETERS
//     s1: string to trim
//     set: characters to trim
// RETURN VALUES
//     ft_strtrim() returns a trimmed copy of s1; NULL
//if the memory allocation failed.
// AUTHORIZED EXTERNAL FUNCTIONS
//     malloc(3)
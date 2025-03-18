/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/21 15:14:13 by pavidal       #+#    #+#                 */
/*   Updated: 2024/11/17 19:27:18 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;
	size_t	i;

	i = 0;
	dst = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	return (ft_memcpy(dst, s, ft_strlen(s) + 1));
}

//RETURN VALUE: a pointer to a new string which is a duplicate of the string s.
//Memory for the new string is obtained with malloc(3),
//and can be freed with free(3).
//We have to use malloc for this since we need memory for the new string
//via malloc--- size is strlen + 1
//the returned value of this function
//must be 'freeable' with the free function.
// how?
// use malloc to allocate enough space for s1
//we will have to copy it completely
//so we need enough space for it
// loop over s1 and copy each character in the new string youust allocated
//return the allocated and copied string */

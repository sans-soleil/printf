/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/21 14:53:30 by pavidal       #+#    #+#                 */
/*   Updated: 2024/11/17 19:22:19 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*tmp;

	tmp = malloc(nmemb * size);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, nmemb * size);
	return (tmp);
}
//but all the memory bytes are set to 0
//instead of staying as the gibberish that was there in memory
//before we allocated it.
// declare a tmp unsigned char pointer
// use malloc to allocate count * size in tmp * obv check null tmp/
// loop over tmp and set each byte to 0
// return the allocated memory tmp
// If nmemb or size is
//0, then calloc() returns either NULL, or a unique pointer
//value that can  later  be  successfully  passed  to  free().
// If  the multiplication of nmemb and size would result in integer
// overflow, then calloc() returns an error.
	// if (size == 0 || nmemb == 0)
	// 	return (malloc(0));
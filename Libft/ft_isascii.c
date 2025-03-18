/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/08 13:42:02 by pavidal       #+#    #+#                 */
/*   Updated: 2024/11/17 19:22:47 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_isascii(int c)
{
	if (!(c >= 0 && c <= 127))
		return (0);
	return (1);
}

//isascii checks whether c is a 7-bit unsigned char value that fits
//into the ASCII character set. 2^7 = 128 -> 0 - 127, unsigned: ALL +
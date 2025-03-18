/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printfchar.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/03 19:29:45 by pavidal       #+#    #+#                 */
/*   Updated: 2024/11/25 17:39:33 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "includes/libft.h"

int	printfchar(int c)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	return (1);
}

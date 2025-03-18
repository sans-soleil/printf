/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printfstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/03 17:19:21 by pavidal       #+#    #+#                 */
/*   Updated: 2024/12/07 12:19:54 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "includes/libft.h"

int	printfstr(char *str)
{
	if (!str)
		return (write(1,"(null)",ft_strlen("(null)")));
	return (write(1,str,ft_strlen(str)));
}

// int main (void)
// {
// 	char *str = "";
// 	printf("%s", NULL);
// 	return (0);
// }
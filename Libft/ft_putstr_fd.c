/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/22 18:42:16 by pavidal       #+#    #+#                 */
/*   Updated: 2024/11/17 19:23:55 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}

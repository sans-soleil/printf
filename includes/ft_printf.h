/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/01 15:13:26 by pavidal       #+#    #+#                 */
/*   Updated: 2024/11/25 22:34:06 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft.h"

int	ft_printf(const char *input, ...);
int	printfchar(int c);
int	printfstr(char *str);
int	nbr_base(long n, int base, char *base_digits);
int	printfptr(uintptr_t ptr);

#endif

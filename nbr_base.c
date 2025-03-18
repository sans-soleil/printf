/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   nbr_base.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/16 19:49:40 by pavidal       #+#    #+#                 */
/*   Updated: 2024/11/25 23:13:08 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "includes/libft.h"

int	nbr_base(long n, int base, char *base_digits)
{
	int				count;

	count = 0;
	if (base == 10 && n < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		count++;
		n = -n;
	}
	if (n >= base)
		count += nbr_base(n / base, base, base_digits);
	if (write(1, &base_digits[n % base], 1) == -1)
		return (-1);
	return (count + 1);
}

// int main (void)
// {
// 	int n = 255;
// 	nbr_base(n, 10, "0123456789");
// 	int nu = 255;
// 	nbr_base(nu, 16, "0123456789abcdef");
// 	int na = 0;
// 	nbr_base(na, 10, "0123456789");
// 	int ne = 35;
// 	nbr_base(ne, 16, "0123456789abcdef");
// 	return (0);

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/22 16:48:18 by pavidal       #+#    #+#                 */
/*   Updated: 2024/11/17 19:23:04 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static size_t	count_digit(long nbr);
static void		fill_string(char *nstr, long nbr, size_t len, int is_negative);

char	*ft_itoa(int n)
{
	long	nbr;
	char	*nstr;
	size_t	len;
	int		is_negative;

	is_negative = 0;
	nbr = n;
	if (nbr < 0)
	{
		is_negative = 1;
		nbr = -nbr;
	}
	len = count_digit(nbr) + is_negative;
	nstr = (char *)ft_calloc(len + 1, sizeof(char));
	if (!nstr)
	{
		return (NULL);
	}
	fill_string(nstr, nbr, len, is_negative);
	return (nstr);
}

static size_t	count_digit(long nbr)
{
	size_t	count;

	count = 0;
	if (nbr == 0)
		count ++;
	while (nbr > 0)
	{
		count++;
		nbr = nbr / 10;
	}
	return (count);
}

static void	fill_string(char *nstr, long nbr, size_t len, int is_negative)
{
	size_t	i;

	i = len - 1;
	if (nbr == 0)
	{
		nstr[0] = '0';
		nstr[1] = '\0';
	}
	if (is_negative)
	{
		nstr[0] = '-';
	}
	while (nbr > 0)
	{
		nstr[i] = '0' + (nbr % 10);
		nbr = nbr / 10;
		i--;
	}
}

// DESCRIPTION
//     Allocate (with malloc(3)) and returns a string representing n.
//     Negative numbers must be handled.
// PARAMETERS
//     n: int to convert
// RETURN VALUES
//     ft_itoa() returns the string representing n; NULL if
//the memory allocation failed.
// AUTHORIZED EXTERNAL FUNCTIONS
//     malloc(3)
// Step 1: Convert the integer to a long for safe handling.
// Step 2: Call int_len to determine the necessary length of the string.
// Step 3: Use pre_conv to allocate the string and initialize it.
// Step 4: Perform the conversion loop to fill in the digits
//from the end of the string.
// Step 5: Handle the negative sign if the original integer was negative.
// Step 6: Null-terminate the string and return it.
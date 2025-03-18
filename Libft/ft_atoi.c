/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/18 22:43:47 by pavidal       #+#    #+#                 */
/*   Updated: 2024/11/17 19:22:37 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	long	result;
	int		i;

	i = 0;
	while (str[i] == '\n' || str[i] == ' ' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	sign = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}
	result = 0;
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

// int main (void)
// {
// 	const char s1[] = "214748364856";
// 	const char s2[] = "214748364856";
// 	printf("%d\n", ft_atoi(s1));
// 	printf("%d\n", atoi(s2));
// 	return (0);
// }
// 	printf("%d\n", ft_atoi("-2147483648"));
//	printf("%d\n", ft_atoi("-2147483648"));
//     printf("%d\n", ft_atoi("42"));
//     printf("%d\n", ft_atoi("   +789abc"));
//     printf("%d\n", ft_atoi("999999999999"));
//     printf("%d\n", ft_atoi("214748364856"));
//     printf("Real deal: %d\n", atoi("214748364856"));
//     printf("%d\n", ft_atoi("-21474836488675760237423876589423747"));
//     printf("Real deal: %d\n", atoi("-21474836488675760237423876589423747"));
//     return 0;
// }

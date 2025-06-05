/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micampil <micampil@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:20:22 by micampil          #+#    #+#             */
/*   Updated: 2025/04/17 18:20:23 by micampil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_fillstring(char *str, int len, int sign, unsigned int num)
{
	str[len] = '\0';
	while (len--)
	{
		str[len] = (num % 10) + '0';
		num /= 10;
	}
	if (sign == -1)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	char			*str;
	int				len;
	int				sign;
	unsigned int	num;

	sign = 1;
	if (n < 0)
	{
		sign = -1;
		num = -n;
	}
	else
		num = n;
	len = ft_numlen(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_fillstring(str, len, sign, num);
	return (str);
}

// #include <stdio.h>

// int main()
// {
//     int num = 1234576;
//     char *result = ft_itoa(num);
//     printf("The string representation of %d is: %s\n", num, result);
//     free(result);
//     return (0);
// }

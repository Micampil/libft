/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micampil <micampil@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:15:36 by micampil          #+#    #+#             */
/*   Updated: 2025/04/17 18:15:38 by micampil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// #include <stdio.h>

// int main(void)
// {
//     printf("Testing ft_isascii:\n");

//     // Test with ASCII characters
//     printf("ft_isascii('A') = %d\n", ft_isascii('A'));
//     printf("ft_isascii('z') = %d\n", ft_isascii('z'));
//     printf("ft_isascii('0') = %d\n", ft_isascii('0'));
//     printf("ft_isascii(' ') = %d\n", ft_isascii(' '));

//     // Test with non-ASCII characters
//     printf("ft_isascii(128) = %d\n", ft_isascii(128));
//     printf("ft_isascii(-1) = %d\n", ft_isascii(-1));

//     return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micampil <micampil@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:20:39 by micampil          #+#    #+#             */
/*   Updated: 2025/04/17 18:20:41 by micampil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1 = (const unsigned char *)s1;
	const unsigned char	*ptr2 = (const unsigned char *)s2;

	while (n--)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
	}
	return (0);
}

// #include <stdio.h>

// int main() {
//     char a[] = "abcde";
//     char b[] = "abcde";

//     int result = ft_memcmp(a, b, 5);
//     if (result == 0) {
//         printf("Memory blocks are equal.\nResult is: %d\n", result);
//     } else if (result < 0) {
//         printf("a < b\nResult is: %d\n", result);
//     } else {
//         printf("a > b\nResult is: %d\n", result);
//     }

//     return (0);
// }

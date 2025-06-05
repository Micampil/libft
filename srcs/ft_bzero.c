/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micampil <micampil@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:15:00 by micampil          #+#    #+#             */
/*   Updated: 2025/04/17 18:15:03 by micampil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}

// #include <stdio.h>

// int main(void)
// {
//     char str1[20] = "Hello World";
//     char str2[20] = "Hello World";

//     printf("Before ft_bzero: %s\n", str1);
//     ft_bzero(str1, 7);
//     printf("After ft_bzero (first 7 bytes): ");
//     for (int i = 0; i < 10; i++)
//         printf("%c", str1[i] ? str1[i] : '0');
//     printf("\n");

//     printf("Before bzero: %s\n", str2);
//     bzero(str2, 7);
//     printf("After bzero (first 7 bytes): ");
//     for (int i = 0; i < 10; i++)
//         printf("%c", str2[i] ? str2[i] : '0');
//     printf("\n");

//     return (0);
// }

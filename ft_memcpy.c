/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micampil <micampil@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:20:50 by micampil          #+#    #+#             */
/*   Updated: 2025/04/17 18:20:52 by micampil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char src[] = "Hello, World!";
//     char dest[20];
// 	size_t n = 4;

// 	memcpy(NULL, NULL, 3);
//     ft_memcpy(dest, src, 13);

//     dest[13] = '\0';

//     printf("Source: %s\n", src);
//     printf("Destination: %s\n", dest);

//     return (0);
// }

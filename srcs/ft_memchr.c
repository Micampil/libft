/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micampil <micampil@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:20:29 by micampil          #+#    #+#             */
/*   Updated: 2025/04/17 18:20:30 by micampil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr = (const unsigned char *)s;

	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main() {
//     char str[] = "hell wrld";
//     char *result = ft_memchr(str, 'o', ft_strlen(str));

//     if (result != NULL) {
//         printf("'o' found at position: %ld\n", result - str);
//     } else {
//         printf("'o' not found\n");
//     }

//     return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micampil <micampil@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:21:13 by micampil          #+#    #+#             */
/*   Updated: 2025/04/17 18:21:14 by micampil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// int main() {
//     char str[50] = "Hello, World!";
//     printf("Before memset: %s\n", str);

//     ft_memset(str, 'M', 6);
//     printf("After memset: %s\n", str);

//     return (0);
// }

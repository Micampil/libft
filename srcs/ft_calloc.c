/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Micampil <micampil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:15:10 by micampil          #+#    #+#             */
/*   Updated: 2025/05/15 15:57:09 by Micampil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <strings.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count == 0 || size == 0)
	{
		return (malloc(0));
	}
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// #include <stdio.h>

// int main(void)
// {
//     int *arr;
//     size_t i;
//     size_t count = 5;

//     // Test ft_calloc
//     arr = (int *)ft_calloc(count, sizeof(int));
//     if (!arr)
//     {
//         printf("Memory allocation failed\n");
//         return (1);
//     }

//     // Check if memory is zeroed
//     printf("Values after calloc:\n");
//     for (i = 0; i < count; i++)
//         printf("arr[%zu] = %d\n", i, arr[i]);

//     // Fill with some values
//     for (i = 0; i < count; i++)
//         arr[i] = i + 10;

//     printf("\nValues after modification:\n");
//     for (i = 0; i < count; i++)
//         printf("arr[%zu] = %d\n", i, arr[i]);

//     // Free allocated memory
//     free(arr);

//     return (0);
// }

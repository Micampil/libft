/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micampil <micampil@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:22:21 by micampil          #+#    #+#             */
/*   Updated: 2025/04/17 18:22:23 by micampil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;
	int				i;

	ch = (unsigned char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			return ((char *)&s[i]);
		i++;
	}
	if (ch == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

// #include <stdio.h>

// int main() {
//     char str[] = "Hell, Wrld!";
//     char *result = ft_strchr(str, 'o');

//     if (result != NULL) {
//         printf("'o' found at position: %ld\n", result - str);
//     } else {
//         printf("'o' not found\n");
//     }

//     return (0);
// }

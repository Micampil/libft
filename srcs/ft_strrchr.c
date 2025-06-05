/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micampil <micampil@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:25:27 by micampil          #+#    #+#             */
/*   Updated: 2025/04/17 18:25:29 by micampil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *)s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

// #include <stdio.h>

// int main()
// {
//     const char *str = "Hello, world!";
//     int c = 'o';

//     char *result = ft_strrchr(str, c);
//     if (result)
//         printf("Found: %s\n", result);
//     else
//         printf("Not found\n");

//     return (0);
// }

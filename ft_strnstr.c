/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micampil <micampil@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:23:55 by micampil          #+#    #+#             */
/*   Updated: 2025/04/17 18:23:56 by micampil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (to_find[0] == '\0')
		return ((char *)str);
	i = 0;
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (str[i + j] == to_find[j] && (i + j) < len)
		{
			if (to_find[j + 1] == '\0')
				return ((char *)&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int main()
// {
//     const char *str = "Hello, world!";
//     const char *to_find = "H";
//     size_t len = 15;

//     char *result = ft_strnstr(str, to_find, len);
//     if (result)
//         printf("Found: %s\n", result);
//     else
//         printf("Not found\n");

//     return (0);
// }

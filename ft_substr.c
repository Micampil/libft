/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micampil <micampil@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:25:44 by micampil          #+#    #+#             */
/*   Updated: 2025/04/17 18:25:45 by micampil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (!s)
		return (NULL);
	if ((size_t)start >= (size_t)ft_strlen((char *)s))
		return (ft_strdup(""));
	if (len > (size_t)ft_strlen((char *)s + (size_t)start))
		len = (size_t)ft_strlen((char *)s + (size_t)start);
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// #include <stdio.h>

// int main(void)
// {
//     char *str = "Hello, World!";
//     char *substr = ft_substr(str, 13, 7);
//     printf("Substring: %s\n", substr);
//     free(substr);
//     return (0);
// }

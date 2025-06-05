/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micampil <micampil@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:23:34 by micampil          #+#    #+#             */
/*   Updated: 2025/04/17 18:23:35 by micampil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	i;

	if (!s || !f)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// char map_toupper(unsigned int i, char c)
// {
//     (void)i;
//     return (char)ft_toupper((int)c);
// }

// #include <stdio.h>

// int main(void)
// {
//     char *str = "hEllo";
//     char *result;

//     result = ft_strmapi(str, map_toupper);
//     printf("%s\n", result);
//     free(result);
//     return (0);
// }

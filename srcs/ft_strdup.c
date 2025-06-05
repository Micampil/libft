/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micampil <micampil@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:22:33 by micampil          #+#    #+#             */
/*   Updated: 2025/04/17 18:22:34 by micampil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(src);
	dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	while (i < len)
	{
		dup[i] = src[i];
		i++;
	}
	dup[len] = '\0';
	return (dup);
}

// #include <stdio.h>
// int main()
// {
// 	char *original = "Test string";
// 	char *duplicate = ft_strdup(original);
// 	printf("Original: %s\nAddress: %p\n", original, original);
// 	printf("Duplicated: %s\nDup Adress: %p\n", duplicate, duplicate);
//     free(duplicate);
//     return (0);
// }

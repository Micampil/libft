/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micampil <micampil@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:25:57 by micampil          #+#    #+#             */
/*   Updated: 2025/04/17 18:25:58 by micampil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// #include <stdio.h>

// int main()
// {
//     char c = 'a';
//     printf("Original: %c\n", c);
//     printf("Uppercase: %c\n", ft_toupper(c));
//     return (0);
// }

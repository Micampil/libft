/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micampil <micampil@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:15:19 by micampil          #+#    #+#             */
/*   Updated: 2025/04/17 18:15:21 by micampil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// #include <stdio.h>
// int main(void)
// {
//     char test_chars[] = {'a', 'Z', '0', '9', '@', ' ', '\n'};
//     int i;

//     for (i = 0; i < sizeof(test_chars); i++)
//     {
//         char c = test_chars[i];
//         printf("ft_isalnum('%c') = %d\n", c, ft_isalnum(c));
//     }
//     return (0);
// }

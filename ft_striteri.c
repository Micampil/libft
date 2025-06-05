/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micampil <micampil@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:22:48 by micampil          #+#    #+#             */
/*   Updated: 2025/04/17 18:22:49 by micampil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>

// void print_index_and_char(unsigned int index, char *c)
// {
//     printf("Index: %u, Char: %c\n", index, *c);
// }
// int main(void)
// {
//     char str[] = "Hello, World!";
//     ft_striteri(str, print_index_and_char);
//     return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micampil <micampil@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:21:22 by micampil          #+#    #+#             */
/*   Updated: 2025/04/17 18:21:23 by micampil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}

// int main(void)
// {
//     int fd = 1;
//     char c = 'A';

//     ft_putchar_fd(c, fd);
//     return (0);
// }

// #include <fcntl.h>

// int main(void)
// {
//     int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

//     if (fd == -1)
//         return (1);

//     ft_putchar_fd('H', fd);
//     ft_putchar_fd('e', fd);
//     ft_putchar_fd('l', fd);
//     ft_putchar_fd('l', fd);
//     ft_putchar_fd('o', fd);

//     close(fd);
//     return (0);
// }

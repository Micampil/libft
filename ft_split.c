/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micampil <micampil@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:22:12 by micampil          #+#    #+#             */
/*   Updated: 2025/04/17 18:22:13 by micampil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c)
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static void	ft_free_split(char **result, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static int	ft_handle_word(char **result, const char *s, char c, size_t *i)
{
	size_t	start;
	size_t	end;

	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	end = *i;
	*result = ft_substr(s, start, end - start);
	if (!(*result))
		return (0);
	return (1);
}

static int	ft_populate(char **result, const char *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			if (!ft_handle_word(&result[j], s, c, &i))
			{
				ft_free_split(result, j);
				return (0);
			}
			j++;
		}
	}
	result[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!result)
		return (NULL);
	if (!ft_populate(result, s, c))
		return (NULL);
	return (result);
}

// #include <stdio.h>

// int main(void)
// {
//     char **result;
//     char str[] = "Hello, world! This is a test.";
//     char delimiter = ' ';
//     unsigned i;

//     result = ft_split(str, delimiter);
//     if (!result)
//     {
//         printf("Memory allocation failed\n");
//         return (1);
//     }

//     for (i = 0; result[i] != NULL; i++)
//     {
//         printf("result[%d]: %s\n", i, result[i]);
//         free(result[i]);
//     }
//     free(result);

//     return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoherfan <yoherfan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:45:43 by yoherfan          #+#    #+#             */
/*   Updated: 2024/11/28 17:06:43 by yoherfan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_next_delim_index(const char *s, char c)
{
	int	i;

	i = 0;
	if (s[0] == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (i);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pointer;
	size_t	i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(nmemb * size);
	i = -1;
	while (++i < nmemb * size)
		((unsigned char *)pointer)[i] = '\0';
	return (pointer);
}

int	count_words(char const *s, char c)
{
	int	i;
	int	toggle;
	int	count;

	count = 0;
	i = -1;
	toggle = 0;
	while (s[++i] != '\0')
	{
		if (s[i] == c && toggle == 1)
			toggle = 0;
		if (s[i] != c && toggle == 0)
		{
			toggle = 1;
			count++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	matrix = (char **)ft_calloc((count_words(s, c) + 1), sizeof(char *));
	while (j < count_words(s, c))
	{
		k = 0;
		while (s[i] == c)
			i++;
		matrix[j] = ft_calloc(ft_next_delim_index(&s[i], c) + 1, 1);
		while (s[i] != '\0' && s[i] != c)
		{
			matrix[j][k] = s[i];
			i++;
			k++;
		}
		matrix[j][k] = '\0';
		j++;
	}
	matrix[j] = NULL;
	return (matrix);
}
/*
int main()
{
	char	**matrix;
	matrix = ft_split(",,,,ci,a,,,,,,,,,,,,,,,o,,,,", ',');
	printf("%s\n", matrix[0]);
	printf("%s\n", matrix[1]);
	printf("%s\n", matrix[2]);
	free(matrix);
}*/
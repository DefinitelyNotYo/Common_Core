/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoherfan <yoherfan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:43:38 by yoherfan          #+#    #+#             */
/*   Updated: 2024/11/26 17:05:33 by yoherfan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = -1;
	str = malloc(sizeof(char) * len + 1);
	while (++i < len + 1)
		((unsigned char *)str)[i] = '\0';
	if (!str)
		return (NULL);
	i = 0;
	while (s[i + start] != '\0' && i < len)
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	check_char(char const *s, char c)
{
	int	i;

	i = -1;
	while (s[++i] != '\0')
		if (s[i] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (check_char(set, s1[i]) == 1)
		i++;
	while (check_char(set, s1[j]) == 1)
		j--;
	len = ft_strlen(s1) - i - (ft_strlen(s1) - j - 1);
	str = malloc(sizeof(char) * len + 1);
	str = ft_substr(s1, i, len);
	return (str);
}
/*
int main()
{
	char s[100] = "abvciaovvvbav";
	char set[100] = "abv";
	char *s1;
	s1 = ft_strtrim((char const *)s, set);
	printf("%s", s1);
	
	
}*/
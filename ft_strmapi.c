/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoherfan <yoherfan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:37:16 by yoherfan          #+#    #+#             */
/*   Updated: 2024/11/27 16:23:40 by yoherfan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	str = ft_calloc(ft_strlen(s) + 1, 1);
	i = -1;
	while (s[++i] != '\0')
		str[i] = f(i, s[i]);
	return (str);
}

char	set_to_a(unsigned int i, char c)
{
	(void)i;
	c = 97;
	return (c);
}
/*
int main()
{
	char *prova = "ciao";
	printf("%s\n", prova);
	prova = ft_strmapi((char const *)prova, set_to_a);
	printf("%s", prova);
}*/
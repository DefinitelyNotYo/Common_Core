/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoherfan <yoherfan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:54:53 by yoherfan          #+#    #+#             */
/*   Updated: 2024/11/22 15:19:48 by yoherfan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	if (size == 0)
	{
		while (src[j] != '\0')
			j++;
		return (i + j);
	}
	while (j < size - 1 && src[j] != '\0')
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (i);
}
/*
int main()
{
	char	string_dst[100] = "ciao";
	char	string_src[100] = "superciao";
	size_t	res;
	
	printf("%s\n", string_dst);
	res = ft_strlcat(string_dst, string_src, 3);

	printf("%zu\n", res);
	printf("%s", string_dst);
}*/
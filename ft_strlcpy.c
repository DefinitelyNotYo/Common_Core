/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoherfan <yoherfan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:28:20 by yoherfan          #+#    #+#             */
/*   Updated: 2024/11/27 16:19:45 by yoherfan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = -1;
	if (size == 0)
	{
		while (src[++i] != '\0')
			;
		return (i);
	}
	while (++i < size - 1 && src[i] != '\0')
		dst[i] = src[i];
	dst[i] = '\0';
	return (i);
}
/*
int main()
{
	char	string_dst[10] = "ciao";
	char	string_src[10] = "superciao";
	size_t	res;
	
	printf("%s\n", string_dst);
	res = ft_strlcpy(string_dst, string_src, 100);

	printf("%zu\n", res);
	printf("%s", string_dst);
}*/
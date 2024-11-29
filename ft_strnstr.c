/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoherfan <yoherfan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:01:37 by yoherfan          #+#    #+#             */
/*   Updated: 2024/11/22 18:24:51 by yoherfan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = -1;
	while (big[++i] != '\0' && i < len)
	{
		j = 0;
		while (big[j + i] == little[j])
			j++;
		if (little[j] == '\0' && i + j <= len)
			return ((char *)&big[i]);
	}
	return (NULL);
}
/*
int main()
{
	const char str1[100] = "casale";
    const char str2[100] = "casa";
	char *res = ft_strnstr(str1, str2, 4);
	printf("%s\n", res);
}*/
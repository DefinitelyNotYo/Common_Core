/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoherfan <yoherfan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:50:29 by yoherfan          #+#    #+#             */
/*   Updated: 2024/11/19 19:09:06 by yoherfan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return ((char *)&s[i]);
}
/*
int main()
{
	const char *str = "oooooa";
	const char *substring1 = ft_strchr(str, 0);
	const char *substring2 = strchr(str, 0);
	printf("%s\n", substring1);
	printf("%s", substring2);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoherfan <yoherfan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:10:15 by yoherfan          #+#    #+#             */
/*   Updated: 2024/11/28 13:51:35 by yoherfan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	pointer;
	int	toggle;

	i = 0;
	pointer = 0;
	toggle = 0;
	if (s[0] == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			toggle = 1;
			pointer = i;
		}
		i++;
	}
	if (toggle == 1)
		return ((char *)&s[pointer]);
	else
		return ((char *)&s[i]);
}
/*
int main()
{
	const char *str = "";
	const char *substring1 = ft_strrchr(str, 97);
	const char *substring2 = strrchr(str, 97);
	printf("%s\n", substring1);
	printf("%s", substring2);
}*/

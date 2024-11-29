/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoherfan <yoherfan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:11:39 by yoherfan          #+#    #+#             */
/*   Updated: 2024/11/19 17:13:22 by yoherfan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if (c > 31 && c < 126)
		return (16384);
	else
		return (0);
}
/*
int main()
{
    int i = 48;
    int result = isprint(i);
    int ft_result = ft_isprint(i);
    printf("%d", result);
    printf("\n%d", ft_result);
}*/
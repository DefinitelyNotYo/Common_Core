/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoherfan <yoherfan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:44:10 by yoherfan          #+#    #+#             */
/*   Updated: 2024/11/19 17:47:50 by yoherfan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if (c > 96 && c < 128)
		return (c - 32);
	else
		return (c);
}
/*
int main()
{
    int i = 97;
    int result = toupper(i);
    int ft_result = ft_toupper(i);
    printf("%d", result);
    printf("\n%d", ft_result);
}*/
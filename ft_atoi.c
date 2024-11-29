/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoherfan <yoherfan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:04:33 by yoherfan          #+#    #+#             */
/*   Updated: 2024/11/19 18:53:29 by yoherfan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	sign;

	sign = 0;
	result = 0;
	i = 0;
	while (nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		if (nptr[i++] == '-')
			sign = 1;
	while (nptr[i] > 47 && nptr[i] < 58)
		result = result * 10 + (nptr[i++] - 48);
	if (sign == 1)
		return (-1 * result);
	else
		return (result);
}
/*
int main()
{
    const char *str = "                         -27jhjh89";
    int result = atoi(str);
    int ft_result = ft_atoi(str);
    printf("%d\n", result);
    printf("%d", ft_result);    
}*/
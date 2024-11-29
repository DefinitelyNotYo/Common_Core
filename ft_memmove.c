/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoherfan <yoherfan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:20:02 by yoherfan          #+#    #+#             */
/*   Updated: 2024/11/22 14:26:59 by yoherfan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	if ((size_t)dest - (size_t)src < n)
	{
		i = n;
		while (--i > 0)
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		((unsigned char *)dest)[0] = ((unsigned char *)src)[0];
	}
	else
		while (++i < n)
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	return (dest);
}
/*
int	main()
{
	size_t	n = 5;
	
	char	sorgente[10]= "mario";	 //src

	printf("%s\n", sorgente);
	memmove(&sorgente[3], &sorgente[0], n);
	ft_memmove(&sorgente[3], &sorgente[0], n);
	
	printf("%s\n", sorgente);
}*/
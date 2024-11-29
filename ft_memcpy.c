/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoherfan <yoherfan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:56:29 by yoherfan          #+#    #+#             */
/*   Updated: 2024/11/20 19:20:57 by yoherfan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	return (dest);
}
/*
int	main()
{
	size_t	n = 7;
	
	char	sorgente[10]= "roccioso";	 //src
	char	destinazione[5]= "cane"; //dest

	printf("%s\n", destinazione);
	memcpy(destinazione, sorgente, n);
	ft_memcpy(destinazione, sorgente, n);
	
	printf("%s\n", destinazione);
}*/
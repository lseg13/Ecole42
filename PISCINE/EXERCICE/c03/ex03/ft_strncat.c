/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsegura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:21:33 by lsegura           #+#    #+#             */
/*   Updated: 2024/08/08 10:39:28 by lsegura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int str_len(char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int u;

	i = str_len(dest);
	u = 0;
	while (src[u] && u < nb)
	{
		dest[i + u] = src[u];
		u++;
	}
	dest[i + u] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int   main(void)
{
	char    result[999] = "Le patron, ";
	printf("%s\n", ft_strncat(result, "c'est moi", 20));
	return (0);
}*/

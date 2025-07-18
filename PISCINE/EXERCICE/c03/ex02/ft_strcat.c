/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsegura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 15:39:09 by lsegura           #+#    #+#             */
/*   Updated: 2024/07/23 18:53:54 by lsegura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	u;

	i = str_len(dest);
	u = 0;
	while (src[u])
	{
		dest[i + u] = src[u];
		u++;
	}
	dest[i + u] = '\0';
	return (dest);
}
/*#include <stdio.h>
int	main(void)
{
	char	result[614] = "Le patron, ";

	printf("%s\n", ft_strcat(result, "c'est moi"));
	return (0);
}*/

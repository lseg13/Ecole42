/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsegura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:31:16 by lsegura           #+#    #+#             */
/*   Updated: 2024/08/07 10:48:08 by lsegura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
int	main(void)
{
	char	src[] = "coucou";
	char	dest[10];
	int	i;

	ft_strcpy(dest, src);
	i = 0;
	while (dest[i] != '\0')
	{
		write(1, &dest[i], 1);

		i++;
	}
}

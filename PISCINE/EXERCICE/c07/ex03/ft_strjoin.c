/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsegura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 00:51:24 by lsegura           #+#    #+#             */
/*   Updated: 2024/08/08 10:51:25 by lsegura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int clt(int size, char **strs, char *sep)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (i < size)
	{
		result = result + ft_strlen(strs[i]) + ft_strlen(sep);
		i++;
	}
	result -= ft_strlen(sep);
	return (result);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	char *result;
	int longtt;

	i = 0;
	if (size == 0)
	{
		result = malloc(sizeof(char));
		if (result == 0)
			return (0);
		result[0] = '\0';
		return (result);
	}
	longtt = clt(size, strs, sep);
	result = malloc(sizeof(char) * (longtt + 1));
	if (result == 0)
		return (0);
	while (i < size)
	{
		result = ft_strcat(result, strs[i]);
		if (i < size - 1)
			result = ft_strcat(result, sep);
		i++;
	}
	return (result);
}

/*int	main(int argc, char **argv)
{
	printf("%s\n",  ft_strjoin(argc, argv, "___"));
} */

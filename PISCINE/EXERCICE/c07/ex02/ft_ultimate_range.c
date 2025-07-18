/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsegura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 00:11:23 by lsegura           #+#    #+#             */
/*   Updated: 2024/08/01 11:20:23 by lsegura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	j;
	int	i;
	int	*tab;

	i = max - min;
	tab = (int *)malloc(i * sizeof(int));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!tab)
	{
		*range = NULL;
		return (-1);
	}
	j = 0;
	while (j < i)
	{
		tab[j] = min + j;
		j++;
	}
	*range = tab;
	return (i);
}

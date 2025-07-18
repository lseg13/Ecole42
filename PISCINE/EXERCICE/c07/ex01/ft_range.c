/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsegura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:51:07 by lsegura           #+#    #+#             */
/*   Updated: 2024/08/08 13:46:50 by lsegura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*tab;

	if (min >= max)
		return (NULL);
	i = max - min;
	tab = (int *)malloc(i * sizeof(int));
	if (!tab)
		return (0);
	j = 0;
	while (j < i)
	{
		tab[j] = min + j;
		j++;
	}
	return (tab);
}

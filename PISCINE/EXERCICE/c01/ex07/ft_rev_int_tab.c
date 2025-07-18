/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsegura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:50:40 by lsegura           #+#    #+#             */
/*   Updated: 2024/07/21 19:34:16 by lsegura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	u;
	int	temp;

	i = 0;
	u = (size - 1);
	while (u > i)
	{
		temp = tab[u];
		tab[u] = tab[i];
		tab[i] = temp;
		i++;
		u--;
	}
}

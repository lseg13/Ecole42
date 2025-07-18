/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsegura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:48:47 by lsegura           #+#    #+#             */
/*   Updated: 2024/07/29 12:30:03 by lsegura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		result = 1;
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
#include <stdio.h>

int main(void)
{
	printf("%d", ft_iterative_power(10, 4));
}
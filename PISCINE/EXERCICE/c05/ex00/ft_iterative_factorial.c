/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsegura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:32:02 by lsegura           #+#    #+#             */
/*   Updated: 2024/07/30 20:56:59 by lsegura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (0 < nb)
	{
		result = result * nb;
		nb --;
	}
	return (result);
}

/*int	main(void)
{
	printf("%d", ft_iterative_factorial(-5));
}*/

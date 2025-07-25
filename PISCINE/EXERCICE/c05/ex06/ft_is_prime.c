/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsegura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 19:05:02 by lsegura           #+#    #+#             */
/*   Updated: 2024/07/30 14:36:55 by lsegura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3 || nb == 5)
	{
		return (1);
	}
	if (nb % 2 == 0)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>

int ft_is_prime(int nb);

int	main(void)
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
			ft_is_prime(-1) == 0 ? "OK" : "Fail",
			ft_is_prime(-3) == 0 ? "OK" : "Fail",
			ft_is_prime(0) == 0 ? "OK" : "Fail",
			ft_is_prime(1) == 0 ? "OK" : "Fail",
			ft_is_prime(2) == 1 ? "OK" : "Fail",
			ft_is_prime(3) == 1 ? "OK" : "Fail",
			ft_is_prime(4) == 0 ? "OK" : "Fail",
			ft_is_prime(5) == 1 ? "OK" : "Fail",
			ft_is_prime(6) == 0 ? "OK" : "Fail",
			ft_is_prime(7) == 1 ? "OK" : "Fail",
			ft_is_prime(10) == 0 ? "OK" : "Fail",
			ft_is_prime(11) == 1 ? "OK" : "Fail",
			ft_is_prime(13) == 1 ? "OK" : "Fail",
			ft_is_prime(19) == 1 ? "OK" : "Fail",
			ft_is_prime(20) == 0 ? "OK" : "Fail"
	      );
}*/

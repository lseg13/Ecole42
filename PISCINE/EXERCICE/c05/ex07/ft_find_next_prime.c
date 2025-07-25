/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsegura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:13:56 by lsegura           #+#    #+#             */
/*   Updated: 2024/07/30 14:39:24 by lsegura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_premier(int nb)
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

int	ft_find_next_prime(int nb)
{
	while ((is_premier(nb)) != 1)
	{
		nb++;
	}
	return (nb);
}

/*#include <stdio.h>

int ft_find_next_prime(int nb);

int	main(void)
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
			ft_find_next_prime(-1) == 2 ? "OK" : "Fail",
			ft_find_next_prime(-3) == 2 ? "OK" : "Fail",
			ft_find_next_prime(0) == 2 ? "OK" : "Fail",
			ft_find_next_prime(1) == 2 ? "OK" : "Fail",
			ft_find_next_prime(2) == 2 ? "OK" : "Fail",
			ft_find_next_prime(3) == 3 ? "OK" : "Fail",
			ft_find_next_prime(4) == 5 ? "OK" : "Fail",
			ft_find_next_prime(5) == 5 ? "OK" : "Fail",
			ft_find_next_prime(6) == 7 ? "OK" : "Fail",
			ft_find_next_prime(7) == 7 ? "OK" : "Fail",
			ft_find_next_prime(10) == 11 ? "OK" : "Fail",
			ft_find_next_prime(11) == 11 ? "OK" : "Fail",
			ft_find_next_prime(13) == 13 ? "OK" : "Fail",
			ft_find_next_prime(19) == 19 ? "OK" : "Fail",
			ft_find_next_prime(20) == 23 ? "OK" : "Fail"
	      );
}*/

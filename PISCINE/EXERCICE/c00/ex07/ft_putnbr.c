/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsegura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 00:05:20 by lsegura           #+#    #+#             */
/*   Updated: 2024/07/31 11:23:10 by lsegura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	nb = nb % 10 + '0';
	write(1, &nb, 1);
}
#include <stdio.h>

int             main(void)
{
        ft_putnbr(42);
        printf("\n");
        ft_putnbr(-42);
        printf("\n");
        ft_putnbr(-2147483648);
        printf("\n");
        ft_putnbr(2147483647);
        printf("\n");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohazgho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:40:49 by mohazgho          #+#    #+#             */
/*   Updated: 2024/07/21 20:03:14 by mohazgho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	boucle(int x, int y, int *col, int *row)
{
	while (*row < y)
	{
		*col = 0;
		while (*col < x)
		{
			if (*col == 0 && (*row == 0 || *row == y - 1))
				ft_putchar('A');
			else if (*col == x - 1 && (*row == 0 || *row == y - 1))
				ft_putchar('C');
			else if (*row != 0 && *row != y - 1 && *col != x - 1 && *col != 0)
				ft_putchar(' ');
			else
				ft_putchar('B');
			*col += 1;
		}
		ft_putchar('\n');
		*row += 1;
	}
}

int	rush(int x, int y)
{
	int	col;
	int	row;
	int	*p_col;
	int	*p_row;

	row = 0;
	p_col = &col;
	p_row = &row;
	if (x < 0 || y < 0)
		return (write(1, "Erreur, tapez un nombre positif\n", 32));
	boucle(x, y, p_col, p_row);
}

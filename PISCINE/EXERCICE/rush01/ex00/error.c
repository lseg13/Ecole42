/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 10:13:38 by bepoisso          #+#    #+#             */
/*   Updated: 2024/07/27 10:22:17 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
int	ft_strlen(char *str);

int	check_error(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 2)
	{
		ft_putstr("Error\n");
		return (1);
	}
	while (av[1][i])
	{
		if (!((av[1][i] >= '0' && av[1][i] <= '9') || av[1][i] == ' '))
		{
			ft_putstr("Error\n");
			return (1);
		}
		i++;
	}
	if (ft_strlen(av[1]) != 31)
	{
		ft_putstr("Error\n");
		return (1);
	}
	return (0);
}

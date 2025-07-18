/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsegura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 16:19:00 by lsegura           #+#    #+#             */
/*   Updated: 2024/07/24 16:17:59 by lsegura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	if (ft_str_is_printable("SDFGHJ") == 1)
		write(1, "GG", 2);
	else
		write(1, "Erreur", 6);
	return(0);
}*/

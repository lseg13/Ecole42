/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsegura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 16:11:42 by lsegura           #+#    #+#             */
/*   Updated: 2024/07/24 17:14:55 by lsegura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 65 || str[i] > 90)
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	if (ft_str_is_uppercase("SDFGHJ") == 1)
		write(1, "GG", 2);
	else
		write(1, "Erreur", 6);
	return(0);
}*/

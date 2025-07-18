/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsegura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 16:41:52 by lsegura           #+#    #+#             */
/*   Updated: 2024/07/24 16:18:21 by lsegura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*int	main(void)
{
	char	str[] = " ThhjtkgL";
	int	i;

	i = 0;
	ft_strupcase(str);
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return(0);
}*/

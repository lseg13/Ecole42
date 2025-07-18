/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsumbhoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 20:00:43 by dsumbhoo          #+#    #+#             */
/*   Updated: 2024/08/04 02:51:11 by dsumbhoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	buf[100];	// stocke les caractères lus par read
	int	fd;		// descripteur de fichier à lire
	int	nb_read;	// stocke le retour de read
	int	count;		// compte du nombre de lectures avec read

	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
		return (1);
	nb_read = -1;
	count = 0;
	while (nb_read != 0)
	{
		nb_read = read(fd, buf, 100);
		if (nb_read == -1)
		{
			printf("Erreur de lecture !\n");
			return (1);
		}
		buf[nb_read] = '\0';
		printf("%s\n", buf);
		count++;
	}
	close(fd);
	return (0);
}

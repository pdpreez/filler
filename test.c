/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 16:41:07 by ppreez            #+#    #+#             */
/*   Updated: 2018/06/22 10:53:57 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include <fcntl.h>

int	main(void)
{
	char *line;
	int	fd;
	int	i;

	i = 0;
	fd = open("./test.txt", O_CREAT | O_RDWR, 0777);
	while (get_next_line(0, &line))
	{
		write(fd, line, ft_strlen(line));
		write(fd, "\n", 1);
		if (!ft_strncmp(line, "Piece", 5))
			break ;
	}
	write(1, "8 2\n", 4);
	close(fd);
	return (0);
}

/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: robihaap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/03 14:06:48 by robihaap     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/17 13:40:42 by robihaap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

/*
 * compile with
 * gcc -Wall -Wextra -Werror get_next_line.c libft/libft.a main.c
 */
int		main(int ac, char **av)
{
	int			fd;
	int			ret;
	char		*line;

	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		while ((ret = get_next_line(fd, &line)) > 0)
			ft_putendl(line);
	}
	return (0);
}

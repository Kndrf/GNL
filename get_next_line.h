/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.h                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: robihaap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/20 13:51:02 by robihaap     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/03 17:40:45 by robihaap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include "libft/includes/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>

# include <stdio.h>

# define BUFF_SIZE 1

typedef struct			s_gnl
{
	int					fd;
	char				*backup;
}						t_gnl;

int						get_next_line(int const fd, char **line);

#endif

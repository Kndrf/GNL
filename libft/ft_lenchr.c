/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lenchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: robihaap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/21 15:37:13 by robihaap     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/21 15:44:05 by robihaap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

int			ft_lenchr(const char *s, int c)
{
	unsigned char	*ps;
	int				i;

	ps = (unsigned char *)s;
	i = 0;
	while (ps[i])
	{
		if (ps[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

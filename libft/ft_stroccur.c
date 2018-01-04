/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchri.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: robihaap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/27 16:36:09 by robihaap     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/04 12:07:19 by robihaap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

int			ft_stroccur(const char *s, char c)
{
	unsigned char		*ps;
	int					i;

	i = 0;
	ps = (unsigned char *)s;
	while (ps[i])
	{
		if (ps[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

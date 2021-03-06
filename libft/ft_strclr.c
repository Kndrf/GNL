/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strclr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: robihaap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/15 16:21:03 by robihaap     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/18 10:30:07 by robihaap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

void		ft_strclr(char *s)
{
	while (s != NULL && *s)
	{
		*s = '\0';
		s++;
	}
}

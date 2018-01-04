/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iswhitespace.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: robihaap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/15 21:57:20 by robihaap     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/18 10:27:10 by robihaap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

int			ft_iswhitespace(char const c)
{
	if (c == ' ' || c == '\n' || c == '\t' ||
			c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: robihaap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/15 18:14:52 by robihaap     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/18 10:31:23 by robihaap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *ps1;

	ps1 = s1;
	while (*ps1)
		ps1++;
	while (*s2 && n--)
	{
		*ps1 = *s2;
		ps1++;
		s2++;
	}
	*ps1 = '\0';
	return (s1);
}
/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: robihaap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/20 13:53:36 by robihaap     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/14 15:40:15 by robihaap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

int			gnl_reader(int fd, char **result)
{
	char		*tmp;
	char		buf[BUFF_SIZE + 1];
	int			ret;

	ret = 1;
	while (ft_stroccur(*result, '\n') == -1 && ret)
	{
		tmp = *result;
		ret = read(fd, buf, BUFF_SIZE);
		if (ret == -1)
			return (-1);
		buf[ret] = '\0';
		*result = ft_strjoin(tmp, buf);
		ft_strdel((char **)&tmp);
	}
	if (ret == 0 && *result[0] == 0)
	{
		ft_strdel(result);
		return (0);
	}
	return (1);
}

char		**backremain(int fd, t_list **tmp, t_list **list)
{
	t_gnl	*gnl;
	t_list	*link;

	*tmp = *list;
	while (*tmp != NULL && fd != ((t_gnl*)((*tmp)->content))->fd)
		*tmp = (*tmp)->next;
	if (*tmp == NULL)
	{
		link = ft_lstnew(&gnl, sizeof(t_gnl));
		ft_lstadd(list, link);
		*tmp = *list;
		(((t_gnl *)((*tmp)->content))->fd) = fd;
		(((t_gnl *)((*tmp)->content))->backup) = NULL;
	}
	return (&(((t_gnl *)((*tmp)->content))->backup));
}

void		free_list(t_list **tmp, t_list **list)
{
	t_list		*ptmp;

	ptmp = *list;
	while (ptmp != *tmp && *tmp != ptmp->next)
		ptmp = ptmp->next;
	ptmp->next = (*tmp)->next;
	if (ptmp == *tmp)
		*list = (*tmp)->next;
	ft_memdel((void**)(&((*tmp)->content)));
	ft_memdel((void**)(tmp));
}

int			get_next_line(const int fd, char **line)
{
	static t_list	*list = NULL;
	int				back;
	char			*result;
	char			**backup;
	t_list			*tmp;

	backup = backremain(fd, &tmp, &list);
	result = (*backup == NULL) ? ft_strnew(0) : ft_strdup(*backup);
	ft_strdel(backup);
	if ((back = gnl_reader(fd, &result)) != 1)
	{
		free_list(&tmp, &list);
		return (back);
	}
	back = 0;
	while (result[back] != '\0' && result[back] != '\n')
		back++;
	*line = ft_strsub(result, 0, back);
	if (result[back] == '\n')
		*backup = ft_strdup(&result[back + 1]);
	ft_strdel((char**)&result);
	return (1);
}

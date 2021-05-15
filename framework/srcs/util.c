/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:15:51 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 11:17:33 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libunit.h"

void	ut_lstclear(t_unit_test **lst)
{
	t_unit_test	*tmp;

	if (!lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		free((*lst)->title);
		(*lst)->title = NULL;
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}

t_unit_test	*ut_lstlast(t_unit_test *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	ut_lstadd_back(t_unit_test **lst, t_unit_test *new)
{
	t_unit_test	*endlst;

	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	endlst = ut_lstlast(*lst);
	endlst->next = new;
}

t_unit_test	*ut_lstnew(char *title, int (*ut_f)(void))
{
	t_unit_test	*list;

	list = (t_unit_test *)malloc(sizeof(t_unit_test));
	if (!list)
		exit(ut_puts_error("malloc failed\n"));
	list->title = ut_strdup(title);
	if (!list->title)
		exit(ut_puts_error("malloc failed\n"));
	list->result = 0;
	list->ut_f = ut_f;
	list->next = NULL;
	return (list);
}

int	ut_memcpy(void *dest, const void *src)
{
	char		*d;
	const char	*s;
	size_t		ret;
	size_t		n;

	d = dest;
	s = src;
	ret = ut_strlen(s);
	n = ret;
	while (n-- > 0)
		*d++ = *s++;
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:19:04 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 11:22:21 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libunit.h"

int	ut_run_test(t_unit_test *testlist)
{
	pid_t	pid;

	pid = fork();
	if (pid < 0)
		return (42);
	if (pid == 0)
	{
		alarm(3);
		exit(testlist->ut_f());
	}
	wait(&pid);
	if (WIFEXITED(pid))
		return (-WEXITSTATUS(pid));
	if (WIFSIGNALED(pid))
		return (WTERMSIG(pid));
	return (142);
}

int	ut_memresult(void *dest, int result)
{
	if (result == 0)
		return (ut_memcpy(dest, "OK"));
	if (result == -255)
		return (ut_memcpy(dest, "KO"));
	if (result == 6)
		return (ut_memcpy(dest, "ABRT"));
	if (result == 10)
		return (ut_memcpy(dest, "BUS"));
	if (result == 11)
		return (ut_memcpy(dest, "SEGV"));
	if (result == 14)
		return (ut_memcpy(dest, "TLE"));
	if (result == 42)
		return (ut_memcpy(dest, "FORK FAILED"));
	return (ut_memcpy(dest, "UNKNOWN"));
}

void	ut_puts_result(t_unit_test *lst)
{
	ut_memresult(lst->buf, lst->result);
	if (lst->result)
		printf("   > %s : [%s%s%s]\n", lst->title, RED, lst->buf, CEND);
	else
		printf("   > %s : [%s%s%s]\n", lst->title, GREEN, lst->buf, CEND);
}

int	launch_tests(t_unit_test **testlist)
{
	int			ok;
	int			size;
	t_unit_test	*tmp;

	tmp = NULL;
	if (testlist)
		tmp = *testlist;
	ok = 0;
	size = 0;
	while (tmp)
	{
		tmp->result = (ut_run_test(tmp));
		if (!tmp->result)
			ok++;
		ut_puts_result(tmp);
		tmp = tmp->next;
		size++;
	}
	printf("%d/%d tests checked\n\n", ok, size);
	ut_lstclear(testlist);
	if (ok == size)
		return (0);
	return (-1);
}

void	ut_load_test(t_unit_test **testlist, char *title, int (*ut_f)(void))
{
	t_unit_test	*new;

	if (!testlist || !title || !ut_f)
		return ;
	new = ut_lstnew(title, ut_f);
	ut_lstadd_back(testlist, new);
	return ;
}

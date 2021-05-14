#include "../includes/libunit.h"

int	ut_child(t_unit_test *testlist)
{
	alarm(3);
	return (testlist->ut_f());
}

int	ut_run_test(t_unit_test *testlist)
{
	pid_t	pid;

	if ((pid = fork()) < 0)
		return (42); //fork error
	if (pid == 0)// child
		exit(ut_child(testlist)); // success:0, fail:-1, other:SIG
	// parent
	wait(&pid);
	if (WIFEXITED(pid))
		return (-WEXITSTATUS(pid)); //0 or 1
	if (WIFSIGNALED(pid))
		return (WTERMSIG(pid)); //sig
	return (142); // unknown
}

void	ut_del_test(t_unit_test **testlist)
{
	return ;
}

int		ut_set_result(void *dest, int result)
{
	if (result == 0)
		return (ut_memcpy(dest, "OK", 2));
	if (result == 6)
		return (ut_memcpy(dest, "ABRT", 4));
	if (result == 10)
		return (ut_memcpy(dest, "BUS", 3));
	if (result == 11)
		return (ut_memcpy(dest, "SEGV", 4));
	if (result == 14)
		return (ut_memcpy(dest, "TIMEOUT", 7));
	if (result == 42)
		return (ut_memcpy(dest, "FORK FAILED", 11));
	return (ut_memcpy(dest, "UNKNOWN", 7));
}

void	ut_puts_result(t_unit_test **testlist, int ok, int size)
{
	t_unit_test	*tmp;
	char	buf[1024];
	int	len;

	tmp = *testlist;
	while (tmp)
	{
		len = 0;
		len += ut_memcpy(buf + len, tmp->title, ut_strlen(tmp->title));
		len += ut_memcpy(buf + len, " : ", 3);
		len += ut_set_result(buf + len, tmp->result);
		len += ut_memcpy(buf + len, "\n\0", 2);
		ut_puts(buf);
		tmp = tmp->next;
	}
	ut_putnbr_fd(ok, 1);
	ut_putstr_fd("/", 1);
	ut_putnbr_fd(size, 1);
	ut_putstr_fd("\n", 1);
}

/*
**
*/

int		launch_tests(t_unit_test **testlist)
{
	int	ok;
	int	size;
	t_unit_test	*tmp;

	tmp = *testlist;
	ok = 0;
	size = 0;
	int cnt=0;
	while (tmp)
	{
		if (!(tmp->result = (ut_run_test(tmp))))
			ok++;
		tmp = tmp->next;
		size++;
	}
	ut_puts_result(testlist, ok, size);
	ut_lstclear(testlist);
	return ((ok == size) ? 0 : -1);
}

/*
** set title and function in testlist
*/

void	ut_load_test(t_unit_test **testlist, char *title, int (*ut_f)(void))
{
	t_unit_test	*new;

	new = ut_lstnew(title, ut_f);
	ut_lstadd_back(testlist, new);
	return ;
}

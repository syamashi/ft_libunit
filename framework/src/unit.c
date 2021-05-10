#include "../includes/libunit.h"

void ut_puts(char *s)
{
	ft_putstr_fd(s, 1);
}

void	ut_load_test(t_unit_test **testlist, char *title, int (*ut_f)(void))
{
	return ;
}

int		ut_run_test(**testlist)
{
	return (0);
}

void	ut_del_test(t_unit_test **testlist)
{
	return ;
}

int		launch_tests(t_unit_test **testlist)
{
	int	err;

	err = ut_run_test(testlist);
	ut_del_test(testlist);
	return (err);
}

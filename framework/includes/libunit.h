#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <stdlib.h>
# include <unistd.h>
# include <signal.h>
# include <stdio.h>
# include <sys/wait.h>

# define CLEAR "\033[2J"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define DEFCOLOR "\033[39m"

typedef struct	s_unit_test{
	char	*title;
	int		result; // 戻り値いれる
	int		(*ut_f)(void);
	struct s_unit_test *next;
}				t_unit_test;


/*
** units
*/

int		ut_child(t_unit_test *testlist);
int		ut_run_test(t_unit_test *testlist);
void	ut_del_test(t_unit_test **testlist);
int		ut_memresult(void *dest, int result);
void	ut_puts_result(t_unit_test *lst);
void	ut_puts_final_result(int ok, int size);
int		launch_tests(t_unit_test **testlist);
void	ut_load_test(t_unit_test **testlist, char *title, int (*ut_f)(void));

/*
** utils
*/

size_t	ut_strlen(const char *s);
char	*ut_strdup(const char *str);
void	ut_putstr_fd(char *s, int fd);
void ut_puts(char *s);
int ut_puts_error(char *s);
void	ut_lstclear(t_unit_test **lst);
t_unit_test	*ut_lstlast(t_unit_test *lst);
void	ut_lstadd_back(t_unit_test **lst, t_unit_test *new);
t_unit_test	*ut_lstnew(char *title, int (*ut_f)(void));
void	ut_putnbr_fd(int n, int fd);
void	ut_putstr_fd(char *s, int fd);
void	ut_putchar_fd(char c, int fd);
int		ut_memcpy(void *dest, const void *src);
#endif

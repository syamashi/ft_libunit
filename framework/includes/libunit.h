#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <stdlib.h>
# include <unistd.h>
# include <signal.h>
# include <stdio.h>
# include <sys/wait.h>

typedef struct	s_unit_test{
	char	*title;
	int		result; // 戻り値いれる
	int		(*ut_f)(void);
	struct s_unit_test *next;
}				t_unit_test;


/*
** units
*/

int		ut_run_test(t_unit_test *testlist);
void	ut_del_test(t_unit_test **testlist);
int		ut_memcpy(void *dest, const void *src, size_t n);
int		ut_set_result(void *dest, int result);
void	ut_puts_result(t_unit_test **testlist, int ok, int size);
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
t_unit_test	*ut_lstlast(t_unit_test *lst);
void	ut_lstadd_back(t_unit_test **lst, t_unit_test *new);
t_unit_test	*ut_lstnew(char *title);
void	ut_putnbr_fd(int n, int fd);
void	ut_putstr_fd(char *s, int fd);
void	ut_putchar_fd(char c, int fd);
int		ut_memcpy(void *dest, const void *src, size_t n);
#endif

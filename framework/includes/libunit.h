/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:16:04 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 11:21:38 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <stdlib.h>
# include <unistd.h>
# include <signal.h>
# include <stdio.h>
# include <sys/wait.h>

# define CLEAR "\033[2J"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define DEFCOLOR "\033[39m"
# define CEND "\033[0m"

typedef struct s_unit_test{
	char				*title;
	int					result;
	char				buf[1024];
	int					(*ut_f)(void);
	struct s_unit_test	*next;
}				t_unit_test;

/*
** units
*/

int				ut_run_test(t_unit_test *lst);
int				ut_memresult(void *dest, int result);
void			ut_puts_result(t_unit_test *lst);
void			ut_puts_final_result(int ok, int size);
int				launch_tests(t_unit_test **lst);
void			ut_load_test(t_unit_test **lst, char *title, int (*ut_f)(void));

/*
** utils
*/

size_t			ut_strlen(const char *s);
char			*ut_strdup(const char *str);
void			ut_puts(char *s);
int				ut_puts_error(char *s);
void			ut_lstclear(t_unit_test **lst);
t_unit_test		*ut_lstlast(t_unit_test *lst);
void			ut_lstadd_back(t_unit_test **lst, t_unit_test *new);
t_unit_test		*ut_lstnew(char *title, int (*ut_f)(void));
int				ut_memcpy(void *dest, const void *src);
void			ut_puts_ending(void);

#endif

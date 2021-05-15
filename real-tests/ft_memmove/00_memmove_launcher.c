/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_memmove_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:38:58 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 10:09:33 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/realtest_util.h"

int	memmove_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	ut_puts("memmove:\n");
	ut_load_test(&testlist, "Basic test", &memmove_basic_test);
	ut_load_test(&testlist, "Basic2 test", &memmove_basic2_test);
	ut_load_test(&testlist, "Blank test", &memmove_blank_test);
	ut_load_test(&testlist, "Null test", &memmove_null_test);
	return (launch_tests(&testlist));
}

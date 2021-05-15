/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strlen_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:38:58 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 09:36:12 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/realtest_util.h"

int	strlen_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	ut_puts("STRLEN:\n");
	ut_load_test(&testlist, "Basic test", &strlen_basic_test);
	ut_load_test(&testlist, "Basic2 test", &strlen_basic2_test);
	ut_load_test(&testlist, "Basic3 test", &strlen_basic3_test);
	ut_load_test(&testlist, "Basic4 test", &strlen_basic4_test);
	ut_load_test(&testlist, "Basic5 test", &strlen_basic5_test);
	ut_load_test(&testlist, "Basic6 test", &strlen_basic6_test);
	ut_load_test(&testlist, "long test", &strlen_long_test);
	ut_load_test(&testlist, "NULL test", &strlen_null_test);
	return (launch_tests(&testlist));
}

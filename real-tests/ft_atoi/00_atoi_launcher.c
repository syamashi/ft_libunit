/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_atoi_launcher.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:38:58 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 10:42:55 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/realtest_util.h"

int	atoi_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	ut_puts("atoi:\n");
	ut_load_test(&testlist, "Basic test", &atoi_basic_test);
	ut_load_test(&testlist, "Basic2 test", &atoi_basic2_test);
	ut_load_test(&testlist, "Basic3 test", &atoi_basic3_test);
	ut_load_test(&testlist, "Space test", &atoi_space_test);
	ut_load_test(&testlist, "Space2 test", &atoi_space2_test);
	ut_load_test(&testlist, "Space3 test", &atoi_space3_test);
	ut_load_test(&testlist, "INT_MAX test", &atoi_intmax_test);
	ut_load_test(&testlist, "INT_MAX+1 test", &atoi_intmaxpp_test);
	ut_load_test(&testlist, "INT_MIN test", &atoi_intmin_test);
	ut_load_test(&testlist, "INT_MIN-1 test", &atoi_intminmm_test);
	ut_load_test(&testlist, "LONG_MAX test", &atoi_longmax_test);
	ut_load_test(&testlist, "LONG_MAX+1 test", &atoi_longmaxpp_test);
	ut_load_test(&testlist, "LONG_MIN test", &atoi_longmin_test);
	ut_load_test(&testlist, "LONG_MIN-1 test", &atoi_longminmm_test);
	ut_load_test(&testlist, "ULONG_MAX test", &atoi_ulongmax_test);
	ut_load_test(&testlist, "ULONG_MAX+1 test", &atoi_ulongmaxpp_test);
	ut_load_test(&testlist, "Flag test", &atoi_flag_test);
	ut_load_test(&testlist, "Flag2 test", &atoi_flag2_test);
	ut_load_test(&testlist, "Flag3 test", &atoi_flag3_test);
	return (launch_tests(&testlist));
}

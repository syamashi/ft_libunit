/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strtrim_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:38:58 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 11:26:37 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/realtest_util.h"

int	strtrim_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	ut_puts("strtrim:\n");
	ut_load_test(&testlist, "Basic test", &strtrim_basic_test);
	ut_load_test(&testlist, "Basic2 test", &strtrim_basic2_test);
	ut_load_test(&testlist, "Long test", &strtrim_long_test);
	ut_load_test(&testlist, "Blank test", &strtrim_blank_test);
	ut_load_test(&testlist, "Null test", &strtrim_null_test);
	ut_load_test(&testlist, "Null2 test", &strtrim_null2_test);
	ut_load_test(&testlist, "Null3 test", &strtrim_null3_test);
	return (launch_tests(&testlist));
}

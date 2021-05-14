/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strlen_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:38:58 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 01:27:43 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/realtest_util.h"

int	strlen_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	ut_puts("STRLEN:\n");
	ut_load_test(&testlist, "Basic test", &strlen_basic_test);
	ut_load_test(&testlist, "NULL test", &strlen_null_test);
	return (launch_tests(&testlist));
}

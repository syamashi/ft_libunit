/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_atoi_launcher.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:38:58 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 01:43:41 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/realtest_util.h"

int	atoi_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	ut_puts("atoi:\n");
	ut_load_test(&testlist, "Bus test", &atoi_bus_test);
	ut_load_test(&testlist, "Minus test", &atoi_minus_test);
	ut_load_test(&testlist, "Dif test", &atoi_dif_test);
	return (launch_tests(&testlist));
}

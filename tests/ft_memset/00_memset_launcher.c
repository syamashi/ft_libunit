/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_memset_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:38:58 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 11:02:44 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/testutil.h"

int	memset_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	ut_puts("MEMSET:\n");
	ut_load_test(&testlist, "Bus test", &memset_bus_test);
	ut_load_test(&testlist, "Minus test", &memset_minus_test);
	ut_load_test(&testlist, "Dif test", &memset_dif_test);
	return (launch_tests(&testlist));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strcmp_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:39:14 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 01:08:53 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/testutil.h"

int	strcmp_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	ut_puts("STRCMP:\n");
	ut_load_test(&testlist, "Basic test", &strcmp_basic_test);
	return (launch_tests(&testlist));
}

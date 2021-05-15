/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:33:17 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 11:09:35 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/realtest_util.h"

int		main(void)
{
	int err;

	ut_puts("*********************************\n");
	ut_puts("     ** 42 - Unit Tests ****\n");
	ut_puts("*********************************\n");
	err = 0;
	err |= strlen_launcher();
	err |= atoi_launcher();
	err |= memmove_launcher();
	err |= strtrim_launcher();
	ut_puts(YELLOW);
	if (err == -1)
		ut_puts("almost perfect!\n");
	else if (err == 0)
	{
		ut_puts("perfect!\n");
		ut_puts_ending();
	}
	else
		ut_puts("wrong return\n");
	ut_puts(CEND);
	return (err);
}

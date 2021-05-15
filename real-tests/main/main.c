/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:33:17 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 09:57:04 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/realtest_util.h"

int	main(void)
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
	if (err == -1)
		ut_puts("almost perfect!\n");
	else if (err == 0)
		ut_puts("perfect!\n");
	else
		ut_puts("wrong return\n");
	return (err);
}

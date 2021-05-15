/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:33:17 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 08:41:13 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/testutil.h"

int	main(void)
{
	int err;

	ut_puts("*********************************\n");
	ut_puts("     ** 42 - Unit Tests ****\n");
	ut_puts("*********************************\n");
	err = 0;
	err |= strlen_launcher();
	err |= memset_launcher();
	err |= strcmp_launcher();
	if (err == -1)
		ut_puts("almost perfect!\n");
	else if (err == 0)
		ut_puts("perfect!\n");
	else
		ut_puts("wrong retnum\n");
	return (err);
}

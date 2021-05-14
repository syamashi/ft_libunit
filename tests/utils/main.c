/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:33:17 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/14 23:46:42 by syamashi         ###   ########.fr       */
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
	err |= strcmp_launcher();
	if (err)
		ut_puts("almost perfect!\n");
	else
		ut_puts("perfect!\n");
	return (err);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15_atoi_ulongmax.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:32:48 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 09:00:47 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/realtest_util.h"

int	atoi_ulongmax_test(void)
{
	if (ft_atoi("18446744073709551615")
		== atoi("18446744073709551615"))
		return (0);
	else
		return (-1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   13_atoi_longmin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:32:48 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 08:58:47 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/realtest_util.h"

int	atoi_longmin_test(void)
{
	if (ft_atoi("-9223372036854775808")
		== atoi("-9223372036854775808"))
		return (0);
	else
		return (-1);
}

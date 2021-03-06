/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11_atoi_longmax.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:32:48 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 09:41:45 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/realtest_util.h"

int	atoi_longmax_test(void)
{
	if (ft_atoi("9223372036854775807")
		== atoi("9223372036854775807"))
		return (0);
	else
		return (-1);
}

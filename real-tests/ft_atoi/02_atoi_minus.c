/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_atoi_minus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:32:48 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 01:44:34 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/realtest_util.h"

int	atoi_minus_test(void)
{
	if (ft_atoi("123"))
		return (0);
	else
		return (-1);
}
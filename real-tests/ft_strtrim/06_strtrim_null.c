/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_strtrim_null.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:32:48 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 10:09:12 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/realtest_util.h"

int	strtrim_null2_test(void)
{
	if (ft_strtrim("", NULL))
		return (0);
	else
		return (-1);
}

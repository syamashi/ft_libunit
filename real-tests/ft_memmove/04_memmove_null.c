/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_memmove_null.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 10:10:02 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 10:10:07 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/realtest_util.h"

int	memmove_null_test(void)
{
	if (!memcmp(ft_memmove(NULL, NULL, 0), ft_memmove(NULL, NULL, 0), 0))
		return (0);
	else
		return (-1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_memmove_blank.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 10:09:58 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 10:09:59 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/realtest_util.h"

int	memmove_blank_test(void)
{
	if (!memcmp(ft_memmove("", "", 0), memmove("", "", 0), 0))
		return (0);
	else
		return (-1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strcmp_basic.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:39:06 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 08:22:23 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/testutil.h"

int	strcmp_basic_test(void)
{
	if (ft_strcmp("aaa", "aaa") == strcmp("aaa", "aaa"))
		return (0);
	else
		return (-1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_memmove_basic.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 10:09:35 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 10:09:46 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/realtest_util.h"

int	memmove_basic_test(void)
{
	char *s;

	s = strdup("abcdefg");
	if (!memcmp(ft_memmove(s, "zzz", 3), memmove(s, "zzz", 3), 7))
	{
		free(s);
		return (0);
	}
	else
	{
		free(s);
		return (-1);
	}
}

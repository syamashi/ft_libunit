/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_memmove_basic.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 10:09:52 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 10:09:54 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/realtest_util.h"

int	memmove_basic2_test(void)
{
	char *s;

	s = strdup("abcdefg");
	if (!memcmp(ft_memmove(s + 2, s, 5), memmove(s + 2, s, 5), 7))
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

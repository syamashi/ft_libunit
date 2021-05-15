/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strtrim_long.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:32:48 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 10:03:17 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/realtest_util.h"

int	strtrim_long_test(void)
{
	char s[1000100];
	char set[1000100];

	memset(s, 'a', 1000000);
	memset(set, 'a', 1000000);
	s[1000000] = 0;
	set[1000000] = 0;
	if (!strcmp(ft_strtrim(s, set), ""))
		return (0);
	else
		return (-1);
}

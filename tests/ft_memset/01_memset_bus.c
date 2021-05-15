/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_memset_bus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:32:48 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 09:09:22 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/testutil.h"

int	memset_bus_test(void)
{
	char *s;
	char *v;

	s = "abcd";
	v = "abcd";
	s[0] = 'z';
	v[0] = 'z';
	ft_memset(s + 1, 'z', 1);
	memset(v + 1, 'z', 1);
	if (!strcmp(s, v))
		return (0);
	else
		return (-1);
}

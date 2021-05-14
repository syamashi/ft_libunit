/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_memset_dif.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:32:48 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 01:45:24 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/realtest_util.h"

int	memset_dif_test(void)
{
	char *s;
	char *v;

	s = strdup("abcd");
	v = strdup("abcd");
	ft_memset(s, 'z', 2);
	memset(v, 'x', 2);
	if (!strcmp(s, v))
		return (0);
	else
		return (-1);
}

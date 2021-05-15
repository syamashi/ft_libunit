/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_memset_minus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:32:48 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 11:24:54 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/testutil.h"

int	memset_minus_test(void)
{
	char	*s;
	char	*v;

	s = "abcd";
	v = "abcd";
	ft_memset(s, 'z', -1);
	memset(v, 'z', -1);
	if (!strcmp(s, v))
		return (0);
	else
		return (-1);
}

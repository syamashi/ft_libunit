/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_strlen_segf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:32:48 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 08:40:06 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/testutil.h"

int	strlen_segf_test(void)
{
	char s[100];
	char v[100];

	s[0] = '\0':
	v[0] = '\0':
	s[1000000] = 'a';
	v[1000000] = 'a';
	if (ft_strlen(s) == strlen(v))
		return (0);
	else
		return (-1);
}

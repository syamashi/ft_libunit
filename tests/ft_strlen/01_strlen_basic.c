/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strlen_basic.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:32:48 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/14 23:44:29 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/testutil.h"

int	strlen_basic_test(void)
{
	if (ft_strlen("") == 0)
		return (0);
	else
		return (-1);
}

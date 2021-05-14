/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:15:57 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/14 23:26:03 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libunit.h"

/*
** set title and function in testlist
*/

void	ut_load_test(t_unit_test **testlist, char *title, int (*ut_f)(void))
{
	t_unit_test	*new;

	new = ut_lstnew(title, ut_f);
	ut_lstadd_back(testlist, new);
	return ;
}

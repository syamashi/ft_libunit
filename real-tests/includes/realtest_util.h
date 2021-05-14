/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realtest_util.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:37:10 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 01:44:03 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REALTEST_UTIL_H
# define REALTEST_UTIL_H

# include <string.h>
# include "../../framework/includes/libunit.h"
# include "../libft/libft.h"

/*
** tests
*/

int		strlen_launcher(void);
int		strlen_basic_test(void);
int		strlen_null_test(void);

int		memset_launcher(void);
int		memset_bus_test(void);
int		memset_minus_test(void);
int		memset_dif_test(void);

int		atoi_launcher(void);
int		atoi_bus_test(void);
int		atoi_minus_test(void);
int		atoi_dif_test(void);
#endif

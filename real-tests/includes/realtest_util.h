/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realtest_util.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:37:10 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 10:29:36 by syamashi         ###   ########.fr       */
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
int		strlen_basic2_test(void);
int		strlen_basic3_test(void);
int		strlen_basic4_test(void);
int		strlen_basic5_test(void);
int		strlen_basic6_test(void);
int		strlen_long_test(void);
int		strlen_null_test(void);

int		atoi_launcher(void);
int		atoi_basic_test(void);
int		atoi_basic2_test(void);
int		atoi_basic3_test(void);
int		atoi_space_test(void);
int		atoi_space2_test(void);
int		atoi_space3_test(void);
int		atoi_intmax_test(void);
int		atoi_intmaxpp_test(void);
int		atoi_intmin_test(void);
int		atoi_intminmm_test(void);
int		atoi_longmax_test(void);
int		atoi_longmaxpp_test(void);
int		atoi_longmin_test(void);
int		atoi_longminmm_test(void);
int		atoi_ulongmax_test(void);
int		atoi_ulongmaxpp_test(void);
int		atoi_flag_test(void);
int		atoi_flag2_test(void);
int		atoi_flag3_test(void);

int		memmove_launcher(void);
int		memmove_basic_test(void);
int		memmove_basic2_test(void);
int		memmove_blank_test(void);
int		memmove_null_test(void);

int		strtrim_launcher(void);
int		strtrim_basic_test(void);
int		strtrim_basic2_test(void);
int		strtrim_long_test(void);
int		strtrim_blank_test(void);
int		strtrim_null_test(void);
int		strtrim_null2_test(void);
int		strtrim_null3_test(void);

#endif

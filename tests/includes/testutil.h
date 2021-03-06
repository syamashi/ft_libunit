/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testutil.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:37:10 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 11:35:08 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTUTIL_H
# define TESTUTIL_H

# include <string.h>
# include "../../framework/includes/libunit.h"

/*
** tests
*/

int		strlen_launcher(void);
int		strlen_basic_test(void);
int		strlen_null_test(void);
int		strlen_tle_test(void);
int		strlen_bus_test(void);

int		memset_launcher(void);
int		memset_bus_test(void);
int		memset_minus_test(void);
int		memset_dif_test(void);

int		strcmp_launcher(void);
int		strcmp_basic_test(void);

/*
** utils
*/

size_t	ft_strlen(const char *s);
int		ft_strcmp(const char *s1, const char *s2);
void	*ft_memset(void *s, int c, size_t n);
#endif

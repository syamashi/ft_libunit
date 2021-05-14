#ifndef STRLEN_TEST_H
# define STRLEN_TEST_H

#include <string.h>
#include "../../framework/includes/libunit.h"
#include "../../real-tests/libft/libft.h"

int		strlen_launcher(void);
int		strlen_basic_test(void);
int		strlen_null_test(void);
int		strlen_tle_test(void);

/*
** utils
*/
size_t	ft_strlen(const char *s);
int		ft_loop(void);

#endif

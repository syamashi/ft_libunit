#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <stdlib.h>
# include <unistd.h>
# include <signal.h>
# include <sys/wait.h>
# include "../libft/libft.h"

typedef struct	s_unit_test{
	char	*title;
	long	result;
	struct s_unit_test *next;
}				t_unit_test;

#endif

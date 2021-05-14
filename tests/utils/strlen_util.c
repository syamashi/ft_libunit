#include "../includes/strlen_test.h"

size_t	ft_strlen(const char *s)
{
	size_t	n;

	n = 0;
	while (*s++ != '\0')
		n++;
	return (n);
}

int		ft_loop(void)
{
	while (1)
		;
	return (0);
}

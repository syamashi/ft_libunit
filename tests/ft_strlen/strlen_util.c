#include "strlen_test.h"

size_t	ft_strlen(const char *s)
{
	size_t	n;

	if (!s)
		return (0);
	n = 0;
	while (*s++ != '\0')
		n++;
	return (n);
}

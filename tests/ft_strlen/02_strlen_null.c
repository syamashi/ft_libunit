#include "../includes/strlen_test.h"

int strlen_null_test(void)
{
    if (ft_strlen(NULL) == 0)
        return (0);
    else
        return (-1);
}

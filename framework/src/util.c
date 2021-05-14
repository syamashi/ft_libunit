#include "../includes/libunit.h"

size_t	ut_strlen(const char *s)
{
	size_t	n;

	if (!s)
		return (0);
	n = 0;
	while (*s++ != '\0')
		n++;
	return (n);
}

char	*ut_strdup(const char *str)
{
	char	*copy;
	int		ssz;
	int		n;

	if (!str)
		return (NULL);
	ssz = ut_strlen(str);
	if (!(copy = malloc(sizeof(char) * (ssz + 1))))
		return (NULL);
	n = 0;
	while (*str)
		copy[n++] = *str++;
	copy[n] = '\0';
	return (copy);
}

void	ut_putstr_fd(char *s, int fd)
{
	if (fd < 0 || !s)
		return ;
	write(fd, s, ut_strlen(s));
}

void ut_puts(char *s)
{
	
	ut_putstr_fd(s, 1);
}

int ut_puts_error(char *s)
{
	ut_putstr_fd(s, 1);
	return (1);
}

void	ut_lstclear(t_unit_test **lst)
{
	t_unit_test *tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		free((*lst)->title);
		(*lst)->title = NULL;
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}

t_unit_test	*ut_lstlast(t_unit_test *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	ut_lstadd_back(t_unit_test **lst, t_unit_test *new)
{
	t_unit_test	*endlst;

	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	endlst = ut_lstlast(*lst);
	endlst->next = new;
}

t_unit_test	*ut_lstnew(char *title, int (*ut_f)(void))
{
	t_unit_test	*list;

	if (!(list = (t_unit_test *)malloc(sizeof(t_unit_test))))
		exit (ut_puts_error(""));
	list->title = ut_strdup(title);
	if (!list->title)
		exit(ut_puts_error("malloc failed\n"));
	list->result = 0;
	list->ut_f = ut_f;
	list->next = NULL;
	return (list);
}

void	ut_putnbr_fd(int n, int fd)
{
	long	m;

	m = n;
	if (n < 0)
	{
		ut_putchar_fd('-', fd);
		m = -m;
	}
	if (m <= 9)
	{
		ut_putchar_fd(m + '0', fd);
		return ;
	}
	ut_putnbr_fd(m / 10, fd);
	ut_putchar_fd(m % 10 + '0', fd);
}

void	ut_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}

int		ut_memcpy(void *dest, const void *src, size_t n)
{
	char *d = dest;
	const char *s = src;
	size_t	ret;

	ret = n;
	while (n-- > 0)
		*d++ = *s++;
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:23:07 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 01:31:45 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libunit.h"

void	ut_puts(char *s)
{
	printf("%s", s);
}

int		ut_puts_error(char *s)
{
	printf("%s", s);
	return (-1);
}

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testutil.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syamashi <syamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 23:33:41 by syamashi          #+#    #+#             */
/*   Updated: 2021/05/15 11:24:09 by syamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/testutil.h"

size_t	ft_strlen(const char *s)
{
	size_t	n;

	if (!strcmp(s, "loop"))
		while (1)
			;
	n = 0;
	while (*s++ != '\0')
		n++;
	return (n);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = -1;
	while (s1[++i])
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (s1[i] - s2[i]);
}

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	str = s;
	while (n-- > 0)
		*str++ = c;
	return (s);
}

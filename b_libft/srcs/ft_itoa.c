/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamateo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 23:56:57 by mamateo           #+#    #+#             */
/*   Updated: 2018/12/03 13:34:27 by mamateo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_itoa(int n)
{
	char			*buf;
	char			*s;
	unsigned int	v;

	v = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		v = -v;
	}
	buf = (char *)malloc(sizeof(char) * (4));
	s = buf + sizeof(buf);
	*--s = '\0';
	if (!s)
		return (NULL);
	while (v >= 10)
	{
		*--s = '0' + v % 10;
		v /= 10;
	}
	*--s = '0' + v;
	if (n < 0)
		*--s = '-';
	return (ft_strdup(s));
}
/*
** v == variable
*/

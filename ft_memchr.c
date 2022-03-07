/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 00:10:52 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/03/08 00:10:58 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		i;

	str = s;
	i = 0;
	c %= 256;
	while (i++ < n)
	{
		if (*str == c)
			return ((void *)str);
		str++;
	}
	return (NULL);
}

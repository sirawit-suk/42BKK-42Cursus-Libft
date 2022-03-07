/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 00:46:31 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/03/05 23:00:59 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char			*d;
	const unsigned char		*s;

	d = dst;
	s = src;
	if (n <= 0)
		return (dst);
	if (d > s)
	{
		d = d + n - 1;
		s = s + n - 1;
		while (n-- > 0)
			*(d--) = *(s--);
	}
	else
		while (n-- > 0)
			*(d++) = *(s++);
	return (dst);
}

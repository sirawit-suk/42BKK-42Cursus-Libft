/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 23:12:50 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/03/06 01:12:43 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_c;
	const unsigned char	*s2_c;
	unsigned int		num;

	s1_c = s1;
	s2_c = s2;
	num = 0;
	while (num < n)
	{
		if (*s1_c < *s2_c)
		{
			return (*s1_c - *s2_c);
		}
		else if (*s1_c > *s2_c)
		{
			return (*s1_c - *s2_c);
		}
		s1_c++;
		s2_c++;
		num++;
	}
	return (0);
}

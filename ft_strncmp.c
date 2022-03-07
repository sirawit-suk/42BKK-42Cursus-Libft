/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 22:31:25 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/03/08 00:06:27 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	num;

	num = 0;
	while (num < n)
	{
		if ((unsigned char)*s1 < (unsigned char)*s2)
		{
			return (-1);
		}
		else if ((unsigned char)*s1 > (unsigned char)*s2)
		{
			return (1);
		}
		s1++;
		s2++;
		num++;
	}
	return (0);
}

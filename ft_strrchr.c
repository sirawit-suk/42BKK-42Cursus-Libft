/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 03:06:16 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/03/07 16:23:02 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	c = c % 256;
	len = ft_strlen(s) + 1;
	while (len >= 0)
	{
		if (s[len] == c)
		{
			return ((char *)s + len);
		}
		if (len == 0)
			break ;
		len--;
	}
	return (NULL);
}

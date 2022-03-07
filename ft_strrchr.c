/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 00:10:13 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/03/08 00:10:15 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	c = c % 256;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == c)
			return ((char *)s + len);
		if (len == 0)
			break ;
		len--;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 20:26:06 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/03/08 01:12:31 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	k;
	size_t	index;

	index = 0;
	i = 0;
	while (ft_strchr(set, s1[i]) != NULL && i < ft_strlen(s1))
		i++;
	k = ft_strlen(s1);
	while (ft_strchr(set, s1[k]) != NULL && k > 0)
		k--;
	if (i >= k)
	{
		if (s1[i] != '\0')
			index = 1;
		str = ft_calloc(index + 1, 1);
		*str = s1[i];
		return (str);
	}
	str = ft_calloc(k - i + 1 + 1, 1);
	index = 0;
	while (i <= k)
		str[index++] = s1[i++];
	return (str);
}

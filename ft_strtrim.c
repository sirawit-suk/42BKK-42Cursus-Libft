/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 20:26:06 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/03/06 23:54:27 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	find_len_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;
	size_t	k;

	len = ft_strlen(s1);
	i = 0;
	while (s1[i] != '\0')
	{
		k = 0;
		while (set[k] != '\0')
		{
			if (s1[i] == set[k])
			{
				len--;
				break ;
			}
			k++;
		}
		i++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*temp;
	size_t	i;
	size_t	k;

	str = ft_calloc(find_len_strtrim(s1, set) + 1, 1);
	temp = str;
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		k = 0;
		while (set[k] != '\0')
		{
			if (s1[i] == set[k])
				break ;
			k++;
		}
		if (k == ft_strlen(set))
			*temp++ = s1[i];
		i++;
	}
	return (str);
}

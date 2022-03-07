/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 23:36:20 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/03/06 01:10:42 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *) haystack);
	while (*haystack != '\0' && i < len && i + needle_len <= len)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
		{
			return ((char *) haystack);
		}
		haystack++;
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 17:14:38 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/03/06 17:57:04 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	k;
	char	*str;
	size_t	diff_len;
	size_t	select_len;

	if (start > ft_strlen(s) - 1)
		return (ft_calloc(1, 1));
	diff_len = ft_strlen(s) - start;
	if (diff_len < len)
		select_len = diff_len;
	else
		select_len = len;
	str = NULL;
	str = ft_calloc(select_len + 1, 1);
	if (str == NULL)
		return (NULL);
	k = 0;
	while (k < len && s[start] != '\0')
	{
		str[k] = s[start];
		k++;
		start++;
	}
	return (str);
}

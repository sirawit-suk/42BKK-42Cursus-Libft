/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 01:20:09 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/03/08 10:27:48 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	algorithm(char const *s, char c, char **str_array, size_t len)
{
	size_t	i;
	size_t	k;
	char	*str_word;
	size_t	len_word;

	i = 0;
	k = 0;
	while (k < len)
	{
		while (s[i] == c)
			i++;
		len_word = i;
		while (s[len_word] != c && s[len_word] != '\0')
			len_word++;
		str_word = ft_calloc(len_word - i + 1, sizeof(char));
		if (str_word == NULL)
			return (0);
		len_word = 0;
		while (s[i] != c && s[i] != '\0')
			str_word[len_word++] = s[i++];
		str_array[k++] = str_word;
	}
	return (1);
}

static size_t	find_len(char const *s, char c)
{
	size_t	i;
	size_t	len;
	size_t	is_word;

	i = 0;
	len = 0;
	is_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && is_word == 0)
		{
			is_word = 1;
			len++;
		}
		else if (s[i] == c)
			is_word = 0;
		i++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	size_t	len;
	char	**str_array;

	len = find_len(s, c);
	str_array = malloc((len + 1) * sizeof(char *));
	if (str_array == NULL)
		return (NULL);
	str_array[len] = NULL;
	if (algorithm(s, c, str_array, len) == 0)
		return (NULL);
	return (str_array);
}

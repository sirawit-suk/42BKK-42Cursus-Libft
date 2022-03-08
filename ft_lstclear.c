/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssukwatt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 01:00:41 by ssukwatt          #+#    #+#             */
/*   Updated: 2022/03/09 01:10:22 by ssukwatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*prev;

	temp = *lst;
	while (temp != NULL)
	{
		prev = temp;
		temp = temp -> next;
		ft_lstdelone(prev, del);
	}
	*lst = NULL;
}

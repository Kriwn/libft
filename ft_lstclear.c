/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krwongwa <krwongwa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:36:56 by krwongwa          #+#    #+#             */
/*   Updated: 2023/09/14 14:36:56 by krwongwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;

	if (lst == NULL || !*del)
		return ;
	while (lst != NULL)
	{
		current = *lst;
		(*del)(current);
		free(current);
		*lst = (*lst)->next;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krwongwa <krwongwa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:17:10 by krwongwa          #+#    #+#             */
/*   Updated: 2023/09/12 13:17:10 by krwongwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newNode;

	newNode = malloc(sizeof(t_list));
	if (!newNode)
		return NULL;
	newNode->next = NULL;
	newNode->content = content;
	return (newNode);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krwongwa <krwongwa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 02:02:04 by krwongwa          #+#    #+#             */
/*   Updated: 2023/09/23 02:02:04 by krwongwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;

	if (!lst || !f || !del)
		return NULL;
	head = NULL;
	while(lst)
	{
		ft_lstadd_back(&head, ft_lstnew(f(lst->content)));
		del(f(lst->content));
		lst = lst->next;
	}
	return head;
}

//void *f(void *a)
//{
//	int	i;
//	char *b = (char *)a;

//	i = 0;
//	while(b[i] != '\0')
//	{
//		b[i] = 'o';
//		i++;
//	}
//	return b;
//}

//void del(void *content)
//{
//	free(content);
//}

//void    ft_print(t_list *lst)
//{
//    int    count;

//    count = 0;
//    while (lst)
//    {
//        printf("content[%d]    =    %s\n", count++, (char *)lst -> content);
//        lst = lst -> next;
//    }
//    printf("===============\n");
//}

//int main()
//{
//	t_list *head = NULL;
//	t_list *newHead;

//	ft_lstadd_back(&head, ft_lstnew("cccc"));
//	ft_lstadd_back(&head, ft_lstnew("aaaa"));
//	ft_lstadd_back(&head, ft_lstnew("dddd"));
//	newHead = ft_lstmap(head,&f,del);
//	ft_print(newHead);
//}

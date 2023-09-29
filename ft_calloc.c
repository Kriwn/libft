/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krwongwa <krwongwa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:33:25 by krwongwa          #+#    #+#             */
/*   Updated: 2023/09/01 17:33:25 by krwongwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!(ptr))
		return (NULL);
	ft_bzero (ptr, nmemb * size + 1);
	return (ptr);
}

/*
int main()
{
	char *ptr;
	ptr = ft_calloc(SIZE_MAX,SIZE_MAX);
	printf("%s|\n",ptr);
	printf("%p",ptr);
}
*/

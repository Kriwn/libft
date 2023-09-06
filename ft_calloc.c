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

void *ft_calloc(size_t nmemb, size_t size)
{
		void *ptr;

		if (size == SIZE_MAX && nmemb == SIZE_MAX)
			return NULL;
		ptr = malloc(nmemb * size);
		if (!(ptr))
			return NULL;
		ft_bzero (ptr,nmemb);
		return (ptr);
}

/*
int main()
{
	int *ptr;
	ptr = ft_calloc(SIZE_MAX,SIZE_MAX);
}
*/

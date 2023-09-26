/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krwongwa <krwongwa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 23:59:39 by krwongwa          #+#    #+#             */
/*   Updated: 2023/09/01 23:59:39 by krwongwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	c = (unsigned char)c;
	while (i < n)
	{
		if (ptr[i] == c)
			return (ptr + i);
		i++;
	}
	return (NULL);
}

/*
int main()
{
	char	a[11] = "bonjourno";
	char	b = 'n';
	char	*ptr = ft_memchr(a,b,2);
	printf("%s",ptr);
}
*/

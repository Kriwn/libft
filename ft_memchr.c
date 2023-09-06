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

	ptr = (unsigned char *)s;
	c = (unsigned char)c;
	while (*ptr || n--)
	{
		if (*ptr == c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}

/*
int main()
{
	char	a[11] = "Hello World";
	char	b = 'W';
	char	*ptr = ft_memchr(a,b,7);
	printf("%s",ptr);
}
*/

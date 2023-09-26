/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krwongwa <krwongwa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:41:43 by krwongwa          #+#    #+#             */
/*   Updated: 2023/08/29 18:41:43 by krwongwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *)s;
	c = (unsigned char)c;
	while (ptr[i] != c)
	{
		if (!ptr[i])
			return (NULL);
		i++;
	}
	return (ptr + i);
}

/*
int main()
{
	char	*a = "Hello World";
	char	b = 'o';
	printf("%s",ft_strchr(a,b));
}
*/

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

	ptr = (char *)s;
	c = (unsigned char)c;
	while (*ptr != c)
	{
		if (!*ptr)
			return (NULL);
		ptr++;
	}
	return (ptr);
}

/*
int main()
{
	char	*a = "Hello World";
	char	b = 'o';
	printf("%s",ft_strchr(a,b));
}
*/

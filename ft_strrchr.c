/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krwongwa <krwongwa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:27:19 by krwongwa          #+#    #+#             */
/*   Updated: 2023/08/30 10:27:19 by krwongwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	*ans;
	size_t	i;

	i = 0;
	ptr = (char *)s;
	ans = NULL;
	c = (unsigned char)c;
	if (c == 0)
		return (ptr + ft_strlen(s));
	while (ptr[i])
	{
		if (ptr[i] == c)
			ans = (ptr + i);
		ptr++;
	}
	return (ans);
}

/*
int main()
{
	char	*a = "Hello World";
	char	b = 'o';
	printf("%s",ft_strrchr(a,b));
}
*/

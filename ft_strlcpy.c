/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krwongwa <krwongwa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 16:50:45 by krwongwa          #+#    #+#             */
/*   Updated: 2023/08/25 16:50:45 by krwongwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (dst[0] == '\0' && src[0] == '\0')
		return (0);
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}

/*
 run file .c -lbsd
#include <stdio.h>
#include <bsd/string.h>
int main()
{
	char a[999];
	char test[999];
	char b[20] = "ad\0";
	printf("%ld\n",ft_strlcpy(a,b,2));
	printf("%s\n",a);
	printf("%s\n",b);
	printf("%ld\n",strlcpy(test,b,2));
	printf("%s\n",test);
	printf("%s\n",b);
}
*/

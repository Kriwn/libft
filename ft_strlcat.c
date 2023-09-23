/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krwongwa <krwongwa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 11:26:03 by krwongwa          #+#    #+#             */
/*   Updated: 2023/09/23 11:26:03 by krwongwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = ft_strlen(dst);
	if (size <= ft_strlen(dst))
		return (ft_strlen(src) + size);
	while (src[j] && i + j + 1 < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

//#include <bsd/string.h>

//int main()
//{
//	char dest[30];
//	char test[30];
//	char * src = (char *)"AAAAAAAAA";
//	memset(dest, 'B', 4);
//	memset(test, 'B', 4);

//	printf("%ld\n",ft_strlcat(dest,src,6));
//	printf("%s\n",dest);
//	printf("%ld\n",strlcat(test,src,6));
//	printf("%s\n",test);
//}

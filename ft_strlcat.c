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

	if (!dst && !src)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
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
//	char dest[] = "";

//	char * src = (char *)"AAAAAA";

//	printf("%ld\n",ft_strlcat(dest,src,6));
//	printf("%s\n",dest);
//}

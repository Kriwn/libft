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
	i = 0;
	if (size <= ft_strlen(dst))
		return (ft_strlen(src) + size);
	while(dst[i])
		i++;
	while(src[j] && j < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}

/*
int main()
{
	char dest[30];
	memset(dest, 0, 30);
	char test[30];
	memset(test, 0, 30);
	//char * src = (char *)"AAAAAAAAA";
	dest[0] = 'B';
	test[0] = 'B';

	printf("%s\n",dest);
	printf("%ld\n",ft_strlcat(dest,"123",1));
	printf("%ld\n",strlcat(dest,"123",1));
	printf("%s\n",dest);
}
*/

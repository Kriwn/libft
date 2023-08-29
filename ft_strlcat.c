/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krwongwa <krwongwa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 17:51:41 by krwongwa          #+#    #+#             */
/*   Updated: 2023/08/25 17:51:41 by krwongwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


// ยังไม่เส็จ
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t len;
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	len = ft_strlen(src);
	if (dst[0] == '\0' && size == 0)
		return (len);

	if (size > 0)
	{
		while (dst[i] != '\0')
			i++;
		while (src[n] != '\0' && n < size - 1)
		{
			dst[i + n] = src[n];
			n++;
		}
		dst[i + n] = '\0';
	}
	return (len)
}

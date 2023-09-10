/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krwongwa <krwongwa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 18:27:00 by krwongwa          #+#    #+#             */
/*   Updated: 2023/09/01 18:27:00 by krwongwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*destt;
	unsigned char	*srcc;

	srcc = (unsigned char *)src;
	destt = (unsigned char *)dest;
	i = 0;
	if (n == 0 || !(src))
		return (destt);
	while (i < n)
	{
		destt[i] = srcc[i];
		i++;
	}
	return (dest);
}

/*
int main()
{
	char a[100] = "Geeksfor";
	ft_memcpy(a + 5,a,strlen(a)+1);
	printf("%s",a);
}
*/

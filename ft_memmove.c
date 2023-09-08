/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krwongwa <krwongwa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:09:11 by krwongwa          #+#    #+#             */
/*   Updated: 2023/09/01 11:09:11 by krwongwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*destt;
	unsigned char	*srcc;

	srcc = (unsigned char *)src;
	destt = (unsigned char *)dest;
	i = 0;
	if (n == 0 || !(src))
		return (destt);
	if (dest <= src)
	{
		while (i < n)
		{
			destt[i] = srcc[i];
			i++;
		}
	}
	else
	{
		while (n--)
			destt[n] = srcc[n];
	}
	return (destt);
}

/*
int main()
{
	char a[20] = "Geeksfor";
	printf("%ld\n",strlen(a));
	printf("%p",ft_memmove(NULL,NULL,2));

}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krwongwa <krwongwa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 23:32:50 by krwongwa          #+#    #+#             */
/*   Updated: 2023/09/01 23:32:50 by krwongwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i ++;
	}
	return (str);
}

/*
int main()
{
	char a[10] = "ABCD";
	//memset(a,67,4);
	//ft_memset(a,67,4);
	printf("%s",ft_memset(a,67,4));
}
*/

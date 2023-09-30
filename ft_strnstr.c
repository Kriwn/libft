/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krwongwa <krwongwa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:13:53 by krwongwa          #+#    #+#             */
/*   Updated: 2023/09/08 10:13:53 by krwongwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*s_big;
	size_t	i;
	size_t	j;

	i = 0;
	s_big = (char *)big;
	if (!big && !little)
		return (NULL);
	if (!*little || !len)
		return (s_big);
	while (big[i] && i < len)
	{
		if (s_big[i] == little[0])
		{
			j = 0;
			while (s_big[i + j] == little[j] && i + j < len)
			{
				j++;
				if (!little[j])
					return (s_big + i);
			}
		}
		i++;
	}
	return (NULL);
}

/*
int main()
{
	char a[] = "123";
	//char b[] = "";
	printf("%s",ft_strnstr(a,"",0));
}
*/

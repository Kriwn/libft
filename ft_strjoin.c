/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krwongwa <krwongwa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:21:04 by krwongwa          #+#    #+#             */
/*   Updated: 2023/09/05 10:21:04 by krwongwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	n;
	char	*str;

	i = 0;
	n = 0;
	if (!s1 && !s2)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[n])
	{
		str[n + i] = s2[n];
		n++;
	}
	str[n + i] = '\0';
	return (str);
}

/*
int main()
{
	char *a = "Hello ";
	char *b = "World";
	char *str = ft_strjoin(a,b);
	printf("%s\n",str);
	printf("%ld\n",ft_strlen(str));
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krwongwa <krwongwa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:38:15 by krwongwa          #+#    #+#             */
/*   Updated: 2023/09/12 13:38:15 by krwongwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
char f(unsigned int i, char s)
{
	return s + i;
}

int main()
{
	char a[20] = "Hello World";

	 printf("%s\n", ft_strmapi(a,f));
}
*/

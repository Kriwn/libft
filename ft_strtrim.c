/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krwongwa <krwongwa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:39:16 by krwongwa          #+#    #+#             */
/*   Updated: 2023/09/07 21:39:16 by krwongwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(char str, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (str == set[i])
			return (1);
		i++;
	}
	return (0);
}

size_t	cfont(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && check(s1[i], set))
		i++;
	return (i);
}

size_t	cend(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	len = 0;
	i = ft_strlen(s1) - 1;
	while (i && check(s1[i], set))
	{
		i--;
		len++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*str;
	size_t	i;

	if (!*s1 || !*set)
		return (NULL);
	len = ft_strlen(s1) - (cfont(s1, set) + cend(s1, set));
	i = 0;
	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s1[i + cfont(s1, set)];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
int main()
{
	char a[] = "OXHello WorldOX";
	printf("%s",ft_strtrim(a,"OX"));
}
*/

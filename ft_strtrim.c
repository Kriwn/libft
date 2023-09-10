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

int	check(char str,char const *set)
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

size_t cfont(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while(s1[i] && check(s1[i], set))
		i++;
	return (i);
}

size_t cend(size_t i,char const *s1, char const *set)
{
	size_t	len;

	len = ft_strlen(s1);
	while (len > i && check(s1[len - 1], set))
        len--;
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	font;
	size_t	end;
	size_t	i;

	if (!*s1 || !* set)
		return (NULL);
	font = cfont(s1, set);
	end = cend(font,s1,set);
	str = malloc(sizeof(char) * (end - font) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < (end - font))
	{
		str[i] = s1[i + font];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
int main()
{
	char a[] = "XOAXO";
	printf("%s",ft_strtrim(a,"XO"));
}
*/

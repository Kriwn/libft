/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krwongwa <krwongwa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:02:51 by krwongwa          #+#    #+#             */
/*   Updated: 2023/09/08 10:02:51 by krwongwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	freeall(char **ptr, size_t c)
{
	size_t	i;

	i = 0;
	while (i < c)
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}

size_t	count(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

void	makearray(char **ptr, char const *s, char c)
{
	size_t	start;
	size_t	len;
	size_t	i;

	start = 0;
	len = 0;
	i = 0;
	while (i < count(s, c))
	{
		while (s[start] == c)
			start++;
		while (s[start + len] != '\0' && s[start + len] != c)
			len++;
		ptr[i] = ft_substr(s, start, len);
		if (!ptr[i])
			return (freeall(ptr, i));
		start += len;
		len = 0;
		i++;
	}
	ptr[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;

	if (!s)
		return (NULL);
	ptr = malloc(sizeof(char *) * (count(s, c) + 1));
	if (!ptr)
		return (NULL);
	makearray(ptr, s, c);
	return (ptr);
}

/*
int main()
{
	char **b = ft_split("  tripouille  42  ", ' ');
	printf("%s|\n",b[0]);
	printf("%s|\n",b[1]);
	freeall(b,3);
	//char **b = ft_split(0, 0);
}
*/

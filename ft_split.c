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

void freeall(char **ptr,size_t c)
{
	size_t	i;

	i	= 0;
	while (i < c)
		free(ptr[i]);
	free(ptr);
	return (NULL);
}

char *makearray(char const *s,char c,size_t i)
{
	size_t	count;
	size_t	len;
	char	*str;

	len = 0;
	count = 0;
	while(s[i])
	{
		if (s[i] == c)
		{
			count++;
		}
		if (count == i)
		{
			str = malloc(sizeof(char) * len + 1);
			break;
		}
		else
			len = 0;
		len++;
		i++;
	}
}

size_t	count(char const *s,char c)
{
	size_t	count;
	size_t	i;

	count = 1;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && i != 0)
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	char	*str;
	size_t	i;
	size_t	count;

	i = 0;
	count = count(s,c);
	if (!*s)
		return (NULL);
	ptr = malloc(sizeof(char *) * count);
	if (!ptr)
		return (NULL);
	while(i < count)
	{
		str = makearray(s,c,i);
		if (!str)
		{
			freeall(ptr,i);
			return (NULL);
		}
		
	}
}

int main()
{
	char a[]="_Hello_World_Baaa";
	printf("%ld",count(a,'_'));
}

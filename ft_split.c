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

size_t	count(char const *s,char c)
{
	size_t	count;
	size_t	i;

	count = 1;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
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

	i = 0;
	if (!*s)
		return (NULL);
	ptr = malloc(sizeof(char *) * count(s,c));
	if (!ptr)
		return (NULL);
}

int main()
{
	char a[]="Hello_World_Baaa";
	printf("%ld",count(a,'_'));
}

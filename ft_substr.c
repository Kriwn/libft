/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krwongwa <krwongwa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:43:30 by krwongwa          #+#    #+#             */
/*   Updated: 2023/09/05 10:43:30 by krwongwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	len_s;

	len_s = ft_strlen(s);
	if (start > len_s)
		start = len_s;
	if (len >= len_s - start)
		len = len_s - start;
	if (!s)
		return (NULL);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s[start], len + 1);
	return (str);
}

/*
int main()
{
	char *s = ft_substr("  tripouille  42  ",2, 10);
	char *a = ft_substr("  tripouille  42  ",14,2);
	printf("%s|\n",s);
	printf("%s|\n",a);
	free(s);
	free(a);
}
*/

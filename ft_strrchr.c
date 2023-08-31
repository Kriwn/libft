/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krwongwa <krwongwa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:27:19 by krwongwa          #+#    #+#             */
/*   Updated: 2023/08/30 10:27:19 by krwongwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *ptr;
	char *ans;

	ptr = (char *)s;
	if (!(*s))
		return (NULL);
	while(*ptr)
	{
		if (*ptr == c)
			ans = ptr;
		ptr++;
	}
	return (ans);
}

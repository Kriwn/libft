/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krwongwa <krwongwa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:06:24 by krwongwa          #+#    #+#             */
/*   Updated: 2023/09/02 14:06:24 by krwongwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		ans;
	int		pos;
	char	*ptr;

	ptr = (char *)nptr;
	ans = 0;
	pos = 1;
	while (*ptr && ((*ptr >= '\t' && *ptr <= '\r') || *ptr == ' '))
		ptr++;
	if (*ptr == '+' || *ptr == '-')
	{
		if (*ptr == '-')
			pos = -1;
		ptr ++;
	}
	while (*ptr >= '0' && *ptr <= '9')
	{
		ans = (ans * 10) + *ptr - '0';
		ptr++;
	}
	return (ans * pos);
}

/*
int main()
{
	char a[] ="";
	printf("%d",ft_atoi(a));
}
*/

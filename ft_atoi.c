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
	size_t	i;

	i = 0;
	ptr = (char *)nptr;
	ans = 0;
	pos = 1;
	while (ptr[i] && ((ptr[i] >= '\t' && ptr[i] <= '\r') || ptr[i] == ' '))
		i++;
	if (ptr[i] == '+' || ptr[i] == '-')
	{
		if (ptr[i] == '-')
			pos = -1;
		i++;
	}
	while (ptr[i] >= '0' && ptr[i] <= '9')
	{
		ans = (ans * 10) + ptr[i] - '0';
		i++;
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

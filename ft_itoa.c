/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krwongwa <krwongwa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:27:43 by krwongwa          #+#    #+#             */
/*   Updated: 2023/09/08 11:27:43 by krwongwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countint(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n *= 1;
		count++;
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

int check(int n)
{
	if (n < 0)
	{
		return (1);
	}
	return (0);
}

char	*ft_itoa(int n)
{
	int		count;
	char	*str;
	int		i;

	count = countint(n);
	if (n < 0)
	{
		i = check (n);
		n *= -1;
	}
	str = malloc(sizeof(char) * (count + 1));
	if (!str)
		return (NULL);
	str[count] = '\0';
	while (count--)
	{
		str[count] = (n % 10) + '0';
		n /= 10;
	}
	if (i)
		str[0] = '-';
	return (str);
}

int main()
{
	int i = 0;
	printf("%s\n",ft_itoa(i));
}

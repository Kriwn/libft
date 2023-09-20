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
	if (n == 0)
		return (1);
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


char	*ft_itoa(int n)
{
	int		count;
	char	*str;
	int		i;

	i = 0;
	count = countint(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		i = 1;
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

/*
int main()
{
	int i = -0;
	printf("%s\n",ft_itoa(i));
}
*/

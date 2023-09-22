/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krwongwa <krwongwa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:56:04 by krwongwa          #+#    #+#             */
/*   Updated: 2023/09/12 13:56:04 by krwongwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while(s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

/*
void f(unsigned int i, char* s)
{
	s[i] = 'p';
}

int main()
{
	char a[20] = "Hello World";

	ft_striteri(a,f);
	 printf("%s\n", a);
}
*/

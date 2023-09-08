/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krwongwa <krwongwa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:13:53 by krwongwa          #+#    #+#             */
/*   Updated: 2023/09/08 10:13:53 by krwongwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*s_big;
	size_t	i;
	size_t	j;

	i = 0;
	s_big = (char *)big;
	if (!*little)
		return (s_big);
	while (big[i] != '\0' && i < len)
	{
		if (s_big[i] == little[0])
		{
			j = 0;
			while (s_big[i + j] == little[j] && i + j < len)
			{
				j++;
				if (little[j] == '\0')
					return (s_big + i);
			}
		}
		i++;
	}
	return (NULL);
}

/*
int main()
{
	char a[] = "Hello yo World fuck you";
	char b[] = "you";
	printf("%p\n",ft_strnstr(a,b,4));
}
*/

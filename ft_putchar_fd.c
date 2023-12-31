/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krwongwa <krwongwa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:39:09 by krwongwa          #+#    #+#             */
/*   Updated: 2023/09/11 13:39:09 by krwongwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	c = (unsigned char)c;
	write(fd, &c, 1);
}

/*
int main()
{
	int fd = open("test.txt",O_RDWR);
	if (!fd)
		printf("Pun\n");
	ft_putchar_fd('b',fd);
	ft_putchar_fd('\n',fd);
	ft_putchar_fd('\0',fd);
	ft_putchar_fd('\n',fd);
	ft_putchar_fd('a',fd);
}
*/

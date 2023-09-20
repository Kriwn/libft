/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krwongwa <krwongwa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:00:01 by krwongwa          #+#    #+#             */
/*   Updated: 2023/09/12 13:00:01 by krwongwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fb("-2147483648",fb);
	if (n < 0)
	{
		ft_putchar_fb('-', fb);
		n *= -1;
		ft_putnbr_fd(n, fd);
	}
	if (n < 10)
		ft_putchar_fb(n, fb);
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}

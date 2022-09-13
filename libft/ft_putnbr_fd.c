/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouksim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:22:29 by abouksim          #+#    #+#             */
/*   Updated: 2021/11/10 15:26:36 by abouksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	how_many_num(int n)
{
	int	i;

	i = 1;
	while (n / 10)
	{
		n /= 10;
		i *= 10;
	}
	return (i);
}

void	ft_putnbr_fd(int n, int fd)
{
	int			div;
	int			i;
	long int	samenum;

	samenum = n;
	if (samenum < 0)
	{
		ft_putchar_fd('-', fd);
		samenum *= -1;
	}
	div = how_many_num(samenum);
	while (div)
	{
		i = (samenum / div) % 10 + 48;
		ft_putchar_fd(i, fd);
		div /= 10;
	}
}

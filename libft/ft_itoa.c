/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouksim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:08:59 by abouksim          #+#    #+#             */
/*   Updated: 2021/11/10 18:31:45 by abouksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	calc(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			i;
	int			x;
	char		*ptr;
	long int	sn;

	i = 0;
	x = calc(n);
	ptr = malloc(x * sizeof(char) + 1);
	sn = n;
	if (ptr == NULL)
		return (NULL);
	if (n < 0)
	{
		ptr[i++] = '-';
		sn *= -1;
	}
	ptr[x--] = '\0';
	while (x >= i)
	{
		ptr[x--] = sn % 10 + 48;
		sn /= 10;
	}
	return (ptr);
}

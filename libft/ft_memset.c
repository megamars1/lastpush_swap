/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouksim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:33:14 by abouksim          #+#    #+#             */
/*   Updated: 2021/11/06 11:41:01 by abouksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void*b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*src;

	i = 0;
	src = b;
	while (i < len)
	{
		*(src + i) = (unsigned char) c;
		i++;
	}
	return (b);
}

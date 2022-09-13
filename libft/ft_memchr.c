/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouksim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:15:45 by abouksim          #+#    #+#             */
/*   Updated: 2021/11/08 15:52:31 by abouksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void*str, int c, size_t n)
{
	unsigned char	*s;
	size_t			i;

	s = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (s[i] == (unsigned char )c)
			return (s + i);
		i++;
	}
	return (0);
}

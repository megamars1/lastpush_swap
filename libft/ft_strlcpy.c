/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouksim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:49:05 by abouksim          #+#    #+#             */
/*   Updated: 2021/11/10 11:17:12 by abouksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	x;

	x = 0;
	if (src == 0 || size == 0)
		return (ft_strlen(src));
	while (x < size - 1 && src[x])
	{
		dst[x] = src[x];
		x++;
	}
	dst[x] = '\0';
	return (ft_strlen(src));
}

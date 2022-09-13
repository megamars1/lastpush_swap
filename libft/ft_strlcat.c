/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouksim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:38:24 by abouksim          #+#    #+#             */
/*   Updated: 2021/11/10 18:34:19 by abouksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendst;
	size_t	x;

	x = 0;
	lendst = ft_strlen(dst);
	if (!size || lendst > size)
		return (ft_strlen(src) + size);
	while (lendst < size - 1 && src[x])
	{
		dst[lendst++] = src[x++];
	}
	dst[lendst] = '\0';
	return (ft_strlen(src) + (lendst - x));
}

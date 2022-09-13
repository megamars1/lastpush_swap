/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouksim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:28:00 by abouksim          #+#    #+#             */
/*   Updated: 2021/11/10 15:34:53 by abouksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*destination;
	const char	*source;

	destination = dst + len - 1;
	source = src + len - 1;
	if (dst > src)
	{
		while (len)
		{
			*(destination--) = *(source--);
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

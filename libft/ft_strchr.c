/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouksim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:54:09 by abouksim          #+#    #+#             */
/*   Updated: 2021/11/10 15:52:30 by abouksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s1;
	char	x;
	int		i;

	s1 = (char *)s;
	x = (char )c;
	i = 0;
	while (s1[i])
	{
		if (s1[i] == x)
			return (s1 + i);
		i++;
	}
	if (x == '\0')
		return (s1 + i);
	return (0);
}

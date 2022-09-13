/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouksim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 08:34:40 by abouksim          #+#    #+#             */
/*   Updated: 2021/11/10 08:39:22 by abouksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	int		x;
	int		i;
	char	*s2;

	x = 0;
	i = ft_strlen(s1);
	s2 = malloc(i * sizeof(char) + 1);
	if (s2 == NULL)
		return (0);
	while (x < i)
	{
		*(s2 + x) = *(s1 + x);
		x++;
	}
	s2[x] = '\0';
	return (s2);
}

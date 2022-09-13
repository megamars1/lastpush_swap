/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouksim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 08:43:32 by abouksim          #+#    #+#             */
/*   Updated: 2021/11/10 09:17:06 by abouksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	substr_len;
	char	*sub;

	i = 0;
	if (s == 0)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	substr_len = ft_strlen(s) - start;
	if (substr_len > len)
		substr_len = len;
	sub = malloc((substr_len + 1) * sizeof(char));
	if (sub == NULL)
		return (0);
	while (s[start] && i < len)
	{
		sub[i] = (char )s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}

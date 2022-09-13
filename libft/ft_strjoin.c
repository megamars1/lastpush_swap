/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouksim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:19:57 by abouksim          #+#    #+#             */
/*   Updated: 2021/11/10 18:36:06 by abouksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		x;
	char	*newstr;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1) + ft_strlen(s2);
	x = 0;
	newstr = malloc(i * sizeof(char) + 1);
	if (!newstr)
		return (NULL);
	while (s1[x])
	{
		newstr[x] = s1[x];
		x++;
	}
	i = 0;
	while (s2[i])
		newstr[x++] = s2[i++];
	newstr[x] = '\0';
	return (newstr);
}

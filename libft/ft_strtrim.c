/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouksim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:25:47 by abouksim          #+#    #+#             */
/*   Updated: 2021/11/10 18:33:20 by abouksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	there(char c, const char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (c == str[x])
			return (1);
		x++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	len;
	size_t	i;

	if (!s1 || !set)
		return (0);
	i = 0;
	len = ft_strlen(s1) - 1;
	while (there(s1[i], set))
		i++;
	while (there(s1[len], set))
		len--;
	trim = ft_substr(s1, i, len - i + 1);
	return (trim);
}

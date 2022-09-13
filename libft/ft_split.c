/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a <a@student.42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:26:57 by abouksim          #+#    #+#             */
/*   Updated: 2022/08/31 13:41:37 by a                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	how(char const *str, char c)
{
	int	x;
	int	i;

	x = 0;
	i = 0;
	while (str[x])
	{
		if (str[x] != c && (str[x + 1] == c || str[x + 1] == '\0'))
			i++;
		x++;
	}
	return (i);
}

static char	*cp(char *ptr, int from, int nchar)
{
	int		i;
	char	*dst;

	i = 0;
	dst = (char *)malloc(sizeof(char) * nchar + 1);
	if (!dst)
		return (NULL);
	while (nchar > i)
	{
		dst[i] = ptr[from++];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

static char	**don(char**str, char*ptr, char c)
{
	int	i;
	int	n;
	int	x;

	i = 0;
	x = 0;
	while (ptr[i])
	{
		while (ptr[i] == c)
			i++;
		n = 0;
		while (ptr[i + n] != c && ptr[i + n])
			n++;
		str[x] = cp(ptr, i, n);
		if (str[x++] == NULL)
		{
			while (str[x--])
				free(str[x]);
			free(str);
			return (NULL);
		}
		i += n;
	}
	str[x] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	// int		i;
	char	**str;
	char	*ptr;

	// i = 0;
	ptr = ft_strtrim(s, &c);
	if (!ptr)
		return (NULL);
	str = malloc(sizeof(char *) * how(s, c) + 1);
	if (!str)
		return (NULL);
	don(str, ptr, c);
	free(ptr);
	return (str);
}

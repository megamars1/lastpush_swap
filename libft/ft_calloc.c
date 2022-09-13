/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a <a@student.42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 08:06:01 by abouksim          #+#    #+#             */
/*   Updated: 2022/08/31 12:29:02 by a                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (0);
	ft_bzero(ptr, count * size);
	return (ptr);
}

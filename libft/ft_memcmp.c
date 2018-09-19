/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthulo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 08:29:56 by tthulo            #+#    #+#             */
/*   Updated: 2018/06/05 16:08:49 by tthulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*h1;
	unsigned char	*h2;

	i = 0;
	h1 = (unsigned char*)s1;
	h2 = (unsigned char*)s2;
	while (i < n)
	{
		if (h1[i] != h2[i])
		{
			return ((int)h1[i] - h2[i]);
		}
		i++;
	}
	return (0);
}

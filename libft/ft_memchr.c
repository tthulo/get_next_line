/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthulo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 10:59:34 by tthulo            #+#    #+#             */
/*   Updated: 2018/06/08 13:57:54 by tthulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*hold;

	i = 0;
	hold = (unsigned char*)s;
	while (i < n)
	{
		if (hold[i] == (unsigned char)c)
		{
			return (hold + i);
		}
		i++;
	}
	return (NULL);
}

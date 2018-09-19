/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthulo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 11:19:26 by tthulo            #+#    #+#             */
/*   Updated: 2018/06/13 10:02:45 by tthulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*h1;
	unsigned char	*h2;

	i = 0;
	h1 = (unsigned char*)s1;
	h2 = (unsigned char*)s2;
	if (n == 0)
		return (0);
	while (h1[i] == h2[i] && h1[i] && h2[i] && i < n - 1)
	{
		i++;
	}
	return (h1[i] - h2[i]);
}

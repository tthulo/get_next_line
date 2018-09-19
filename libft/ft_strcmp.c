/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthulo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 12:53:11 by tthulo            #+#    #+#             */
/*   Updated: 2018/06/01 08:44:34 by tthulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*h1;
	unsigned char	*h2;

	i = 0;
	h1 = (unsigned char*)s1;
	h2 = (unsigned char*)s2;
	while (h1[i] == h2[i] && h1[i] != '\0' && h2[i] != '\0')
	{
		i++;
	}
	return ((int)(h1[i] - h2[i]));
}

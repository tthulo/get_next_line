/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthulo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 16:17:40 by tthulo            #+#    #+#             */
/*   Updated: 2018/06/07 09:20:10 by tthulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int c;

	i = 0;
	if (needle[i] == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[i] != '\0')
	{
		c = 0;
		while (haystack[i + c] == needle[c])
		{
			if (needle[c + 1] == '\0')
				return ((char *)haystack + i);
			c++;
		}
		i++;
	}
	return (NULL);
}

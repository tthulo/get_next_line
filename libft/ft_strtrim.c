/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthulo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 16:58:17 by tthulo            #+#    #+#             */
/*   Updated: 2018/06/14 10:53:00 by tthulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		end;
	int		j;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	end = ft_strlen(s);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[end - 1] == ' ' || s[end - 1] == '\n' || s[end - 1] == '\t')
		end--;
	str = ft_strnew(end + 1);
	if (!str)
		return (NULL);
	j = 0;
	while (i < end)
	{
		str[j++] = s[i++];
	}
	str[j] = '\0';
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthulo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 12:41:10 by tthulo            #+#    #+#             */
/*   Updated: 2018/06/15 10:27:29 by tthulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		word_count(char const *s, char c)
{
	int i;
	int word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] == c)
			while (s[i] == c && s[i])
				i++;
		if (s[i])
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (word);
}

static size_t	ft_charnum(char const *s, char c)
{
	size_t i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**str;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (!(str = (char**)malloc(sizeof(char*) * word_count(s, c) + 1)))
		return (NULL);
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			str[j] = ft_strsub(s, i, ft_charnum(&s[i], c));
			j++;
			i = i + ft_charnum(&s[i], c);
		}
		while (s[i] && s[i] == c)
			i++;
	}
	str[j] = NULL;
	return (str);
}

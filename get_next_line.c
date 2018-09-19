/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthulo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 15:41:22 by tthulo            #+#    #+#             */
/*   Updated: 2018/07/01 17:15:31 by tthulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*get_hold(char *hold, char **line)
{
	char	*h;
	int		i;

	i = 0;
	while (hold[i])
	{
		if (hold[i] == '\n')
		{
			*line = ft_strsub(hold, 0, i++);
			h = hold;
			hold = ft_strsub(hold, i, ft_strlen(hold) - i);
			free(h);
			return (hold);
		}
		i++;
	}
	*line = hold;
	hold = NULL;
	return (hold);
}

static int		get_line(const int fd, char **line)
{
	static char	*hold = NULL;
	char		buffer[BUFF_SIZE + 1];
	int			i;
	int			ret;
	char		*h;

	i = 0;
	if (!hold)
		hold = ft_strnew(0);
	while ((ret = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[ret] = '\0';
		i++;
		h = hold;
		hold = ft_strjoin(h, buffer);
		free(h);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	if (ft_strlen(hold) == 0)
		return (0);
	hold = get_hold(hold, line);
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	int		ret;
	char	buff[BUFF_SIZE + 1];

	if (fd < 0 || !line || BUFF_SIZE < 0 || read(fd, buff, 0) < 0)
		return (-1);
	ret = get_line(fd, line);
	if (ret < 0)
		return (-1);
	else if (ret == 0)
		return (0);
	else
		return (1);
}
